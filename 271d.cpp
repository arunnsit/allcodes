#include<iostream>
#include<string.h>
#include<algorithm>
#include<unordered_map>
using namespace std;
char a[2000],b[30];
long long int con[2000]={0},mod=10000000000007;
int main()
{
long long int i,l,k,j,ans=0;
cin>>a>>b>>k;
for(i=0;a[i]!='\0';i++){
	con[i+1]=con[i]+abs(b[a[i]-'a']-'0'-1);
	//cout<<con[i+1]<<endl;
}
unordered_map<long long int ,long long int > has;
l=strlen(a);
for(i=0;i<l;i++)
{   long long int x=0;
	for(j=i;j>=0;j--)
	{   x=(x*131+a[j])%mod;
		//cout<<j<<"-"<<i<<endl;
		if(con[i+1]-con[j]<=k&&!has[x])
		{ 
			ans++;
			has[x]++; 
		}
	}
}
cout<<ans<<endl;	

}