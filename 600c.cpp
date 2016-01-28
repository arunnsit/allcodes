#include<iostream>
#include<string.h>
using namespace std;
string a;
	char b[200009];
	int coun[30]={0};
bool check()
{
	int i=0,c=0;
	for(i=0;i<26;i++){
		if(coun[i]%2!=0)c++;
	}
	if(c==1)return true;
	else return false;
}
int main()
{
	
	cin>>a;
	int i ,j ,k,l,m;
	l=a.length();
	for(i=0;i<l;i++)
	{
		coun[a[i]-97]++;
	}
	if(l%2==0)
	{
		int x=0,y=25;
		while(x<26&&y>=0)
		{
			if((coun[x]&1)!=0)
			{
				while(y>=0&&(coun[y]&1)==0)y--;
				coun[x]++;
				coun[y]--;
				y--;
			}
			x++;
		}
		x=0;
		for(i=0;i<26;i++){
			while(coun[i])
			{
				coun[i]-=2;
				b[x]=i+97;
				b[l-1-x]=i+97;
				x++;
			}
		}
		b[l]='\0';
		cout<<b<<endl;
	}
	else{
		int x=0,y=25;
		while(x<26&&y>=0)
		{   if(check())break;
			if((coun[x]&1)!=0)
			{
				while(y>=0&&(coun[y]&1)==0)y--;
				coun[x]++;
				coun[y]--;
				y--;
			}
			x++;
		}
		x=0;
		y=0;
		for(i=0;i<26;i++){
            if(coun[i]%2!=0){
            	y=i;
            	coun[i]--;
            }
			while(coun[i])
			{
				coun[i]-=2;
				b[x]=i+97;
				b[l-1-x]=i+97;
				x++;
			}
		}
		b[l]='\0';
		b[l/2]=y+97;
		cout<<b<<endl;


	}
}