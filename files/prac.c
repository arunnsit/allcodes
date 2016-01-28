#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    FILE *f,*f2;
    char a[100];
    char ch,c;
    scanf("%s",&a);
    f=fopen(a,"r+");
    while((c=fgetc(f))!=EOF){

          if(islower(c)){
          c=toupper(c);
          fseek(f,-1,SEEK_CUR);
          fputc(c,f);
         fseek(f,0,SEEK_CUR);
          }
          }

}

