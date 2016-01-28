#include<stdio.h>
#include<string.h>
char a[100000],b[100000];int c[100001]={0},d[100001]={0};
int main(){int l1,e,temp,l2,x,carry=0,cp=0,dp=0;
    printf("enter A\n");
    scanf("%s",&a);
        printf("enter B\n");
    scanf("%s",&b);
 l1=strlen(a);
 l2=strlen(b);
 for(e=l1-1;e>=0;e--){c[e]=a[cp]-48;cp++;}
  for(e=l2-1;e>=0;e--){d[e]=b[dp]-48;dp++;}
 if(l1>=l2){temp=l1;}
 else{temp=l2;}
 for(e=0;e<temp+1;e++){x=c[e]+d[e]+carry;if(x>9){carry=x/10;x=x%10;}
 else{carry=0;}c[e]=x;}
 if(c[temp]==0){temp--;}
printf("A+B :\n");

 for(e=temp;e>=0;e--){printf("%d",c[e]);}}
