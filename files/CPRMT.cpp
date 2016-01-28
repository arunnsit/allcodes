#include<stdio.h>
int main(){
    char a[2000],b[2000];
    while(scanf("%s",&a)>0){
        scanf("%s",&b);
        int h1[26]={0},h2[26]={0};
        for(int i=0;a[i]!='\0';i++)
            h1[a[i]-97]++;
        for(int i=0;b[i]!='\0';i++)
            h2[b[i]-97]++;
        for(int i=0;i<26;i++){
            int u=(h1[i]>h2[i])?h2[i]:h1[i];
            while(u--){printf("%c",i+97);}
        }printf("\n");
    }
}
