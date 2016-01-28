#include<stdio.h>
#include<math.h>
int a[1000000]={0};
int main(){
    int t,n,c,i;
    a[1]=0,a[2]=2,a[3]=2,a[4]=3,a[5]=4,a[6]=4;
    for(i=7;i<100006;i++){if(i%3==0)a[i]=2+a[i/3];else{a[i]=2+a[i/3+1];}}
    scanf("%d",&t);
    while(t--){c=0;
    scanf("%d",&n);
    printf("%d\n",a[n]);
    }
}
