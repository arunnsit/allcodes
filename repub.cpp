#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int t,i,ma;char a[100009],ch,k;
    scanf("%d",&t);scanf("%c",&k);
    while(t){int b[130]={0};
        cin.getline(a,100009);
        for(i=0;a[i]!='\0';i++){
            if(a[i]>=65&&a[i]<=91){b[a[i]+32]++;}
            else if(a[i]>=97&&a[i]<=123){b[a[i]]++;}
        }ma=0;
        for(i=123;i>=97;i--){
            if(b[i]>ma){
                ma=b[i];
                ch=(char)i;
            }
        }
        printf("%c\n",ch);

    t--;}
}
