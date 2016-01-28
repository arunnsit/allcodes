#include<stdio.h>
char a[1000007];
int main()
{int t,i,s,p,c;
scanf("%d",&t);
while(t)
{scanf("%s",&a);s=0;c=0;p=0;
for(i=0;a[i]!='\0';i++){if(a[i]=='.'){s++;}
else{if(s>p){p=s;c++;}s=0;}}

printf("%d\n",c);

t--;

}

}
