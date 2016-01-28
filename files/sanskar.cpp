#include<stdio.h>
#include<algorithm>
#include<math.h>
int main(){
    long long int s,so,nos;int a[30],p ,t,n,k,i,j,coun;
    scanf("%d",&t);
    while(t){t--;
        scanf("%d %d",&n,&k);
        s=0;
        for(i=0;i<n;i++){
                scanf("%d",&a[i]);
                s+=a[i];
                }nos=s/k;
                if(s%k!=0||k>n){printf("no\n");}
                else{
                    p=pow(2,n);coun=0;
                for(i=0;i<p;i++){so=0;
        for(j=0;j<n;j++)
        {if(1&(i>>j)){
        so+=a[j];
        }}
if(so==nos){coun++;
    for(j=0;j<n;j++)
    if(1&(i>>j)){
        a[j]=0;
        }
}
}
if(coun==k||coun==p){printf("yes\n");}
else{printf("no\n");}
}}
}
