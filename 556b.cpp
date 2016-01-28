#include<stdio.h>
int main(){
	int n,i,a[1001],b[1001],c[1001];
	scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    for(i=0;i<n;i++){
    	if(i%2==0){
          if(i>=a[i])b[i]=i-a[i];
          else b[i]=n-a[i]+i;
          b[i]=b[i]%n;
    	}
    	else{
    		if(i>=a[i])b[i]=a[i]+n-i;
    		else b[i]=a[i]-i;
    		b[i]=b[i]%n;
    	}
    }
    int f=0,g;
    g=b[0];
    for(i=1;i<n;i++){
    	if(g!=b[i])f=1;
    }
    if(f)printf("No\n");
    else printf("Yes\n");
}
