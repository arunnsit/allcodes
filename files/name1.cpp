#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t){int a[30]={0},i,n,j,s=0;char b[40002];
    scanf("%s",&b);
    for(i=0;b[i]!='\0';i++)a[b[i]-97]++;
    scanf("%s",&b);
    for(i=0;b[i]!='\0';i++)a[b[i]-97]++;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%s",&b);
            for(j=0;b[j]!='\0';j++)a[b[j]-97]--;

    }
    for(i=0;i<28;i++){
        if(a[i]<0){
            s=1;
            break;
        }
    }
    if(s==1)printf("NO\n");
    else printf("YES\n");


    t--;}
}
