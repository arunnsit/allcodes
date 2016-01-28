//alpha coder
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int t,i,p;char a[10005],b[10005],ch;
    scanf("%d",&t);
    scanf("%c",&ch);
    while(t){
        cin.getline(a,10005);
        p=0;
        for(i=0;a[i]!='\0';i++){
           if(a[i]>=48&&a[i]<=57){
           }
           else{b[p]=a[i];p++;}
        }
        b[p]='\0';
        printf("%s\n",b);
    t--;}
}
