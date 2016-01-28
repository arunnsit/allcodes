#include<stdio.h>
#include<string.h>
int main()
{int c;char a[205];int l,k,p,d,tur;
scanf("%d",&c);
while(c){scanf("%s",&a);
l=strlen(a);
for(p=0;p<c;p++)
{d=p;tur=0;
while(d<l){printf("%c",a[d]);if(tur%2==0){d=d+2*c-1-2*p;}else{d=d+1+2*p;}tur++;}
}printf("\n");
scanf("%d",&c);
}
return 0;
}
