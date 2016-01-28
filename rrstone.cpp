//author:arunnsit
//observe the pattern of array aftr odd nd even turns
#include<stdio.h>
 long long int a[100002];
int main(){
    long long int n,k,i,j,m=0,mn=0;
    scanf("%lld %lld",&n,&k);
    for(j=0;j<n;j++){scanf("%lld",&a[j]);if(m<a[j])m=a[j];}
    mn=a[j];if(k>0){k=k%2;if(k==0)k=2;}
    for(i=1;i<=k;i++){
        for(j=0;j<n;j++){
            a[j]=m-a[j];if(a[j]>mn)mn=a[j];
        }
        m=mn;
    }
    for(j=0;j<n;j++){printf("%lld ",a[j]);}
    printf("\n");

}
