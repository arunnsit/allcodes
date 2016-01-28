#include<stdio.h>
#include<string.h>
int main()
{int t,a,b,l;char f[2000000];
scanf("%d",&t);
while(t){int p[20000]={0},co=0;
scanf("%s",&f);l=strlen(f);
for(a=0;a<l;a++){p[f[a]-'a']++;if(p[f[a]-'a']==1){co++;}}
printf("%d\n",co);
t--;
}

}
