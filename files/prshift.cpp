#include<stdio.h>
long long int a[300009],b[300009],n,mod=1000000007;
long long int four[300009],fa[300009],fa3[300009];
long long int func1()
{   
	long long int i,j,k,c=0;
	for(i=0;i<n;i++){
		a[i+n]=a[i];
        if(a[i]==b[0])j=i;
	}
    for(k=j;k<j+n;k++)if(a[k]!=b[k-j])break;
    if(k==j+n)c=1;
    if(c)return b[0];
    else return -1;
}
long long int func2()
{
	long long int x=1,y=1,w=0,z=0;
    long long int i,j;
    long long int less1[100009]={0},less2[100009]={0};
    for(i=0;i<n;i++){
    	for(j=i+1;j<n;j++)if(a[i]>a[j])less1[i]++;
    }
    for(i=0;i<n;i++){
    	for(j=i+1;j<n;j++)if(b[i]>b[j])less2[i]++;
    }
    for(i=0;i<n;i++){
    	x=x+(less1[i])*fa[n-i-1];
    	x%=mod;
    }
    for(i=0;i<n;i++){
    	y=y+(less2[i])*fa[n-i-1];
    	y%=mod;
    }
    x%=mod;
    
    y%=mod;
    z=x%4;
    w=y%4;

    //printf("%lld %lld %lld %lld\n",w,z,x,y);
    if((z==0&&w==0)||(z==1&&w==0)||(z==0&&w==1)||((z==1&&w==1)))return (y+1)/2;
    if((z==2&&w==3)||(z==2&&w==2)||(z==3&&w==3)||(z==3&&w==2))return (y+1)/2 ;
    return (y+1)/2;
}
long long int func3()
{
	long long int x=0,y=1,w=0,z=0;
    long long int i,j;
    long long int less2[100009]={0};
    for(i=0;i<n;i++){
    	for(j=i+1;j<n;j++)if(b[i]>b[j])less2[i]++;
    }
    
    for(i=0;i<n;i++){
    	y=y+(less2[i])*fa[n-i-1];
    	y%=mod;
    }
    y%=mod;
    return y;
}
int main()
{
	long long int t,k,i,j;
	fa[1]=1;
	for(i=2;i<100003;i++){
        fa[i]=(fa[i-1]*i)%mod;
	}
		scanf("%lld",&t);
	
	while(t--)
	{
		scanf("%lld %lld",&n,&k);
        int i;
        for(i=0;i<n;i++)
        	scanf("%lld",&a[i]);
        for(i=0;i<n;i++)
        	scanf("%lld",&b[i]);
        if(k==n){
        	printf("%lld\n",func1());

        }
        else if(k%2==0)
        {
         printf("%lld\n",func3());

        }
        else 
        {
        	printf("%lld\n",func2());

        }


	}
}