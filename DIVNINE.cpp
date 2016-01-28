#include<stdio.h>
char a[100008];
#include<string.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
    scanf("%s",&a);
    int i;
    int s=0;
    int up=0;
    int dp=0;
    int n=strlen(a);
    for(i=0;a[i]!='\0';i++){
        s+=a[i]-'0';
        if(a[i]<'9')up+='9'-a[i];
        if(a[i]>'0'){
                dp+=a[i]-'0';
        if(i==0&&n!=1)dp--;}
    }

    int x=s%9;
    int sol=99;
    //printf("s:%d up:%d dp:%d\n",s%9,up,dp);
    if(x<=4&&dp>=x){
        sol=sol<x?sol:x;
    }
    else if(x<=4){
        sol=sol<x?sol:9-x;
    }
    if(x>4&&up>=9-x){
        sol=sol<x?sol:9-x;
    }
    else if(x>4){
        sol=sol<x?sol:x;
    }
    printf("%d\n",sol);
}
}
