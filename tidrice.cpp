#include<stdio.h>
#include<string.h>
int main()
{char a[112][30],ch;int t,n,i,j,p,coun,b[112];
scanf("%d",&t);
while(t)
{scanf("%d",&n);coun=0;
for(i=0;i<n;i++){scanf("%s %c",&a[i],&ch);if(ch=='+'){b[i]=1;}else{b[i]=-1;}}
for(i=n-1;i>=0;i--){p=0;
for(j=n-1;j>i;j--){if(!strcmp(a[i],a[j])){p=1;
}}
if(p==0){coun+=b[i];}
}printf("%d\n",coun);

t--;}

}
