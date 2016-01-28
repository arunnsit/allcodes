#include <stdio.h>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{
	int n,k,i,j,l,s=0,p,check1=0;
	scanf("%d %d",&n,&k);
	char a[10009];
	scanf("%s",a);
	int hash[11]={0};
	for(i=0;a[i]!='\0';i++){
		hash[a[i]-'0']++;
		if(hash[a[i]-'0']>=k)check1=1;
	}
    if(check1)printf("0\n%s\n",a);

    else
    {   
    	int minhash[12]={0},minsol=n*10+2,v=0;char b[10009];
    	for(i=0;i<=9;i++)
    	{   int coun=min(hash[i],k),sol=0,temp[11]={0},k2=k;
            char d[10009];
            k2-=coun;
    		int x=i-1,y=i+1;
    		while(k2>0)
    		{  //printf("yo");
    			if(y<=9&&k2>0){
    				temp[y]+=min(hash[y],k2);
    				k2-=temp[y];
    				sol+=(y-i)*temp[y];
    				y++;
    			}
    			if(x>=0&&k2>0){
    				temp[x]+=min(hash[x],k2);
    				k2-=temp[x];
    				sol+=(i-x)*temp[x];
    				x--;

    			}
    			

    		}
    	int suphash[11]={0};
    	for(j=0;a[j]!='\0';j++){
    		if(a[j]-'0'>=i&&temp[a[j]-'0'])
    		{
    			d[j]=i+'0';
    			temp[a[j]-'0']--;
    			suphash[a[j]-'0']++;
    		}
    		else if(a[j]-'0'<i&&hash[a[j]-'0']-suphash[a[j]-'0']==temp[a[j]-'0'])
    		{
    			d[j]=i+'0';
    			temp[a[j]-'0']--;
    			suphash[a[j]-'0']++;
    		}

    		else suphash[a[j]-'0']++,d[j]=a[j];

    	}
    			
    		
    		if(sol<minsol||i==0||(sol==minsol&&strcmp(d,b)<0)){
    			strcpy(b,d);
    			minsol=sol;
    			v=i;	

    	}
        }
    	printf("%d\n%s\n",minsol,b);
    	

    }




}
