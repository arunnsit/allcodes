#include<stdio.h>
#include<math.h>
int v[1000009];
int main()
{
	int i,j,k;

	for(i=2;i<=1000;i++)
		if(!v[i]){
			for(j=2*i;j<=1000000;j+=i)
				v[j]++;
		}
int n;
scanf("%d",&n);
while(n--){
	long long int x,y;
	scanf("%I64d",&x);
    y=sqrt(x);
    if(y*y==x&&!v[y]&&x!=1)printf("YES\n");
    else printf("NO\n");

}		

}