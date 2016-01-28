#include<stdio.h>

int t,n,a[2000009]={0},i,j,f[2000009]={0};
int main(){
	scanf("%d",&t);
    for(i=2;i<1000;i++){
    		for(j=i*i*i;j<2000000;j+=i*i*i){
    			a[j]++;
    			//if(j==10)printf("yo");
    		}
    	}
    
    int x=2,m;
    f[1]=1;
    for(i=2;i<2000000;i++){
    	if(a[i]==0){
    		f[i]=x++;
    		m=i;	

    	}

    }
   // printf("%d\n",a[10]);
   int cas=0;
	while(t--){
		scanf("%d",&n);
		printf("Case %d: ",++cas);
		if(f[n])
		printf("%d\n",f[n]);
        else printf("Not Cube Free\n");

	}
}