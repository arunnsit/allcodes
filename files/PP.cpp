#include<stdio.h>
#include<string.h>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
string a[1000009];
long long int forw[1000009],rev[1000009],revbeauty[1000009],mod=1000000007;
bool cmp(string a,string b)
{
	return a.size()<b.size();
}
int main()
{
	long long int  t,n,i,j,k,l;
	long long int ans;
	scanf("%lld",&t);
	while(t--)
	{   unordered_map<long long int,long long int> m;
        ans=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n,cmp);
		for(i=0;i<n;i++)
		{   long long int x=1;
			forw[0]=a[i][0];
			for(j=1;a[i][j]!='\0';j++)
			{
				forw[j]=(a[i][j]+forw[j-1]*41)%mod;

			}
			l=a[i].size();
			rev[l]=0;
			revbeauty[l]=0;
			x=1;
			for(j=l-1;j>=0;j--)
			{
				rev[j]=(a[i][j]+rev[j+1]*41)%mod;
				revbeauty[j]=(revbeauty[j+1]+x*a[i][j])%mod;
				x*=41;
				x%=mod;
				//cout<<revbeauty[j]<<" "<<rev[j]<<" "<<forw[j-1]<<endl;
				if(revbeauty[j]==rev[j]&&j>0)
					ans+=m[forw[j-1]];

			}
			ans+=m[forw[l-1]];
		
			m[rev[0]]++;
		}
		m.clear();
        for(i=0;i<n;i++)
		{   reverse(a[i].begin(),a[i].end());
			long long int x=1;
			forw[0]=a[i][0];
			for(j=1;a[i][j]!='\0';j++)
			{
				forw[j]=(a[i][j]+forw[j-1]*41)%mod;

			}
			l=a[i].size();
			rev[l]=0;
			revbeauty[l]=0;
			x=1;
			for(j=l-1;j>=0;j--)
			{
				rev[j]=(a[i][j]+rev[j+1]*41)%mod;
				revbeauty[j]=(revbeauty[j+1]+x*a[i][j])%mod;
				x*=41;
				x%=mod;
				//cout<<revbeauty[j]<<" "<<rev[j]<<" "<<forw[j-1]<<endl;
				if(revbeauty[j]==rev[j]&&j>0)
					ans+=m[forw[j-1]];

			}
			ans+=m[forw[l-1]];
		
			m[rev[0]]++;
		}
		m.clear();
			printf("%lld\n",ans);
	}
}