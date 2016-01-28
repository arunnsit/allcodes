#include<stdio.h>
#include<string.h>
int main(){
    long long int n,l,i;char a[1002];
    scanf("%lld",&n);
    scanf("%s",&a);
    l=strlen(a);
    for(i=0;i<l;i++){
        if(a[i]=='W'){
            n=n*2+11;
        }
        else{
            if(n%2==0)n=n/2;
            else n=n/2+1;
        }
    }
    printf("%lld",n);
}
