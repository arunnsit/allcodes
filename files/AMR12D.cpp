#include<stdio.h>
#include<string.h>
int main(){
int t,i;
char a[20];
scanf("%d",&t);
while(t--){
    scanf("%s",&a);
    int n=strlen(a);
    for(i=0;i<=(n-1)/2;i++){
        if(a[i]!=a[n-1-i])break;
    }
    if(i==(n-1)/2+1)printf("YES\n");
    else printf("NO\n");
}
}
