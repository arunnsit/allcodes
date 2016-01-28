#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
using namespace std;
static int bit[1006][1006]={0},n,m,arr[1006][1006]={0};
char in[1006][1006],dir[]={'N','E','S','W'};

void update(int x,int y,int val)
{   //if(x<=-1||y<=-1)return;
	int ind1=x+1;
	while(ind1<=n)
	{       int ind2=y+1;
		    while(ind2<=m)
		    {
		    bit[ind1][ind2]+=val;
		  //  cout<<"added at"<<ind1<<" "<<ind2<<endl;
			ind2=ind2+(ind2&(-ind2));
		    }
			ind1=ind1+(ind1&(-ind1));
	}
}
int query(int x,int y)
{
	int ind1=x+1,sum=0;
	while(ind1!=0)
	{
		int ind2=y+1;
		while(ind2!=0)
		{
			sum+=bit[ind1][ind2];
			//cout<<"added from"<<ind1<<" "<<ind2<<" "<<sum<<endl;
			ind2=ind2-(ind2&(-ind2));
		}
		ind1=ind1-(ind1&(-ind1));
	}
	return sum;

}


int main()
{
	scanf("%d %d",&n,&m);
	int i,j,k,l;
	for(i=0;i<n;i++)
		scanf("%s",in[i]);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(in[i][j]=='N')arr[i][j]=0;
			else if(in[i][j]=='E')arr[i][j]=1;
			else if(in[i][j]=='S')arr[i][j]=2;
			else if(in[i][j]=='W')arr[i][j]=3;
int c,x1,y1,x2,y2,val;
char aps[10];
scanf("%d",&c);
while(c--)
{   
	scanf("%s",aps);
	if(aps[0]=='C')
	{
		scanf("%d %d %d %d %d",&x1,&y1,&x2,&y2,&val);
				//printf("hello");
		x1--;y1--;x2--;y2--;
		if(val==0)
		{
			update(x1,y1,1);
			update(x1,y2+1,-1);
			update(x2+1,y1,-1);
			update(x2+1,y2+1,1);
		}
		if(val==1)
		{    //printf("hello");
			update(x1,y1,-1);
			update(x1,y2+1,1);
			update(x2+1,y1,1);
			update(x2+1,y2+1,-1);
		}
	}
	else{
		scanf("%d %d",&x1,&y1);
		x1--;y1--;
		int pasol=(query(x1,y1));
        
		//printf("paso:%d\n",pasol);
		pasol+=arr[x1][y1];
		pasol%=4;
		if(pasol<0)pasol=4+pasol;
		printf("%c\n",dir[pasol]);
	}
}



}