#include<stdio.h>
#include<string.h>
char a[1000006];
int main()
{int t,l,i;long long int c;
scanf("%d",&t);
while(t){scanf("%s",&a);c=1;l=strlen(a);
for(i=0;i<=l-i-1;i++)
{if(a[i]=='?'&&a[i]==a[l-i-1]){c=(c*26)% 10000009;}
if(a[i]!='?'&&a[l-i-1]!='?'&&a[i]!=a[l-i-1]){c=0;break;}
}

printf("%lld\n",c);



t--;}

}
