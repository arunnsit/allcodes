#include<stdio.h>
#include<string.h>
char a[500009],c[500009];
int main()
{int t,i,j,l,ch;
scanf("%d",&t);
while(t){int b[200]={0};
scanf("%s",&a);l=0;
for(i=0;a[i]!='\0';i++){b[a[i]]++;l++;}
scanf("%s",&c); ch=1;
for(i=0;c[i]!='\0';i++){b[c[i]]--;if(b[c[i]]<0){printf("NO\n");ch=0;break;}l--;}
if(ch&&l==0){printf("YES\n");}

t--;}


}
