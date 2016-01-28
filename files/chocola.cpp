#include<stdio.h>
int s[10000][1000];
int in[10000]={0};
int mod=1000000009;
int main(){
int n,m,s1,i,j,k,t,p,q,a;
scanf("%d %d %d",&n,&s1,&m);
for(i=0;i<s1;i++){
    scanf("%d",&s[i][0]);
	for(j=1;j<=s[i][0];j++)scanf("%d",&s[i][j]);
}
while(m--){
	scanf("%d",&t);
	if(t==1){
         scanf("%d %d",&p,&q);
        for(i=1;i<=s[p-1][0];i++){
          in[s[p-1][i]-1]=(in[s[p-1][i]-1]+q)%mod;
        }
	}
	if(t==2){
		scanf("%d",&p);
		long long int u=0;
		for(i=1;i<=s[p-1][0];i++){
          u=(u+in[s[p-1][i]-1])%mod;
        }
        printf("%lld\n",u);
	}
	if(t==3){
		scanf("%d %d %d",&p,&q,&a);
        for(i=p-1;i<q;i++)in[i]=(in[i]+a)%mod;
	}
    if(t==4){
		scanf("%d %d",&p,&q);
		long long int s=0;
        for(i=p-1;i<q;i++)s=(in[i]+s)%mod;
        	printf("%lld\n",s);
	}

}
for(i=0;i<20;i++)printf("%d ",in[i]);
}