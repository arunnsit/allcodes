#include<stdio.h>
int main()
{int t,i;char a[30],b[107];
scanf("%d %s",&t,&a);
while(t)
{scanf("%s",&b);for(i=0;b[i]!='\0';i++){if(b[i]=='_'){printf(" ");}
else if(b[i]>=65&&b[i]<=92){if(a[b[i]-'A']>=65&&a[b[i]-'A']<=92)printf("%c",a[b[i]-'A']);else printf("%c",a[b[i]-'A']-32);}
else if(b[i]>=97&&b[i]<=123){if(a[b[i]-'a']>=97&&a[b[i]-'a']<=123)printf("%c",a[b[i]-'a']);else printf("%c",a[b[i]-'a']+32);}
else{printf("%c",b[i]);}}printf("\n");


t--;}

}
