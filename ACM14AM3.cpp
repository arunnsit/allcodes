#include<stdio.h>
#include<string.h>
int main()
{
	char a[20009];
	int q;
	scanf("%s %d",a,&q);
	while(q--){
		int l,m,i;
		int hash[509]={0};
		int calc[20009]={0};
		scanf("%d %d",&l,&m);
		int length=strlen(a),ten=1;
		for(i=l-1;i>=0;i--)
		{
			calc[i]=(((a[i]-'0')*ten)%m+calc[i-1]%m)%m;
			ten=(ten*10)%m;
			hash[calc[i]]++;
		}
		long long int s=0;
		for(i=l-1;i>=0;i--)
		{
			if(l-calc[i]<0)s+=hash[m+l+calc[i]];
			else s+=hash[l-calc[i]]++;
		}
		printf("%lld\n",s);	


	}

}