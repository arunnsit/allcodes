#include<stdio.h>
#include<string.h>
int main(){
    int t,i,l,j,p=1,swa,mi;char a[102][15],b[102][15],ch,te;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%s",&a[i]);strcpy(b[i],a[i]);}
        for(p=1;p<=t;p++){
            swa=0;
        l=strlen(a[p]);j=0;
       while(j<l&&swa!=1){
            ch=a[p][j];mi=0;
        for(i=l-1;i>j;i--){
            if(ch<a[p][i]){
                ch=a[p][i];mi=i;
            }
        }
        if(ch!='0'&&ch!=a[p][j]){
            te=a[p][j];
            a[p][j]=ch;
            a[p][mi]=te;
            swa=1;
        }
        else {j++;}
       }j=0;swa=0;
       while(j<l-1&&swa!=1){
            ch=b[p][j];mi=0;
        for(i=l-1;i>j;i--){
            if(ch>b[p][i]){
                    if(j==0&&b[p][i]=='0'){}
                else {ch=b[p][i];mi=i;}
            }
        }
        if(ch!=b[p][j]){
            te=b[p][j];
            b[p][j]=ch;
            b[p][mi]=te;
            swa=1;
        }
        else {j++;}
       }

       printf("Case #%d: %s %s\n",p,b[p],a[p]);}
}
