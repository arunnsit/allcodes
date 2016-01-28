#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
long long int a[15][2];
int main(){
	int t,n,i,j;
	cin>>t;
	while(t--)
	{   long long int pow=1,k;
		cin>>n>>k;
		for (int i = 0; i < n; ++i)
		{cin>>a[i][0]>>a[i][1];
		pow*=2;	
		}
		long long int max=0,s,r=0;
		for (int i = 0; i < pow; ++i)
		{ s=0;
		  r=0;	
			for(j=0;j<10;j++){
				if((i>>j)&1){s+=a[j][1];r+=a[j][0];}
			}
			if(s>max&&r<=k)max=s;	
		}
		cout<<max<<endl;



	}
}
