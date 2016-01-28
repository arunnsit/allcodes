#include<stdio.h>
int main(){
    int v1,v2,t,d,i,s=0;
    scanf("%d %d %d %d",&v1,&v2,&t,&d);
    for(i=1;i<=t;i++){
        s+=v1;
     if(v1-d*(t-i)==v2)v1-=d;
     else if(i==t-1)v1=v2;
     else if(v1-d*(t-i)<v2&&v1>v2&&v2+d*(t-i-1)-v1<=d)v1=v2+d*(t-i-1);
     else{
        v1+=d;
     }


    }
    printf("%d\n",s);
}
