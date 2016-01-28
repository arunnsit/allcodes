#include<stdio.h>
#include<string.h>
char in[10002];
int main(){int a,b,c,d,stor[125][2]={0},coun=0,l;
scanf("%s",&in);
l=strlen(in);
for(a=0;a<l;a++){d=in[a];stor[d][0]=d;stor[d][1]++;if(stor[d][1]%2==0){stor[d][1]=0;}
}
for(a=0;a<125;a++){if(stor[a][1]!=0){coun++;}}
if((coun==0)||(coun==1)){printf("Yes");}
else{printf("No");}
}
