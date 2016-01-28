#include<stdio.h>
#include<math.h>
#include<algorithm>
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int a[100000];
int main(){
    int t,n,ma,i,j,p,mi,prev;
    scanf("%d",&t);
    while(t){ma=1;p=0;
        scanf("%d",&n);mi=0;
        scanf("%d",&prev);
        for(i=1;i<n;i++){
            scanf("%d",&mi);
        prev=gcd(prev,mi);
        }
        if(prev==1){
            printf("-1\n");
        }   //  printf("%d\n",prev);

      else{  for(i=2;i<=sqrt(prev);i++){
            if(prev%i==0){ma=2;printf("%d\n",i);break;}
        }
        if(ma==1&&prev!=1){
            printf("%d\n",prev);
        }}





    t--;}
}
