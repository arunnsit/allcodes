#include<stdio.h>
#include<string.h>
char p[800000];
int a[800000]={0};
int main(){
    int i,j,k,n,l,ch=0;
    scanf("%s",&p);
    scanf("%d",&n);
    l=strlen(p);
    for(i=0;i<n;i++){scanf("%d",&j);a[j-1]++;}

    for(i=0;i<l/2;i++){
        if(a[i]){ch+=a[i];}
        if(ch%2!=0){
            char temp;
            temp=p[l-i-1];
            p[l-i-1]=p[i];
            p[i]=temp;
        }

    }
    printf("%s\n",p);
}
