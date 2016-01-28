#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
#define lli long long int
lli A[]={0,9,90,900,9000,90000,900000,9000000,90000000,900000000,9000000000,90000000000,900000000000,9000000000000,90000000000000,900000000000000};
lli power(lli n,lli ex)
{
	lli mul=1;
	for(int i=1;i<=ex;i++)
	{
		mul*=n;
	}
	return mul;
}
int main()
{
	lli t,n,k,i,ans,x,digit,rem,num;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&k);
		lli cur=0,sum=0;
		for(i=0;i<=15;i++)
		{
			if(k>A[i]*i)
			{
				k-=i*A[i];
				sum+=A[i];
			}
			else break;
		}
	//	printf("%lld %lld\n",i,k);
		num=k/i;
		rem=k%i;
		x=sum+num;
		if(!rem)
		printf("%lld\n",x%10);
		else
		{
			x++;
			digit=i-rem+1;
			ans=(x%power(10,digit)/power(10,digit-1));
			printf("%lld\n",ans);
		}

	}
}
