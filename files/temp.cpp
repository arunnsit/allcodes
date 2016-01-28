#include<iostream>
using namespace std;
#define n 500008
int luck[n]={0};
int main()
{
	int i,j,k,l,m,x,y,p=30;
	for(l=1;l<=p;l++)
	{
		for(i=1;i<n;i++)if(!luck[i])break;
		x=i;
	    y=x+1;
		for(j=i+1;j<n;j++)
		{if(!luck[j])y--;
			if(y==0)break;
		}	

	    m=j-x;
        cout<<"l:"<<l<<"lucky:"<<x+1<<endl;
        //cout<<"next:"<<m+x+1<<endl;
        //cout<<"diff:"<<m<<endl;
		for(k=x;k<=n;k+=m)luck[k]++;
	}


}	



