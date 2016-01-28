#include<stdio.h>
long long int s[1500006]={0},t[1500006]={0},a[1500006]={0},m;
int main()
{int p,n,i,j;
scanf("%d",&p);
while(p)
{scanf("%lld %lld %d %lld",&s[0],&t[0],&n,&m);a[0]=(s[0]%100 + 1) * (t[0]%100 + 1);

for(i=1;i<=n;i++){
	s[i] = (78901 + 31*s[i-1])% 699037;
	t[i] = (23456 + 64*t[i-1])%2097151;
	a[i]=(s[i]%100 + 1) * (t[i]%100 + 1);
	//printf("%lld ",a[i]);
}
long long int sum=0;
int low=0,high=0,sol=999999999,pop=0;
while(high>=low&&high<n)
{   
	if(sum<=m){
		while(sum<=m&&high<=n)
		{   pop=high-low;
			high++;
            sum+=a[high];
		}	sol=(sol<(pop)?sol:(pop));

	}
	else if(sum>m){
		while(sum>m&&low<=high){
		low++;
		sum-=a[low];
	}
	pop=high-low;
	}
	sol=(sol<(pop)?sol:(pop));
}
printf("%d\n",sol);
p--;}

}
