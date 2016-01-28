#include<stdio.h>
#include<string.h>
int main()
{char a[50002];int k,p,l,g;
while(1)
{int c[50005]={0};c[0]=1;scanf("%s",&a);l=strlen(a);l=strlen(a);g=0;
if((l==1)&&(a[0]=='0')){break;}
for(k=0;k<l;k++){if(a[k]-'0'!=0){c[k+1]=c[k];}
                if(((a[k]-'0'+(a[k-1]-'0')*10)<=26)&&((a[k]-'0'+(a[k-1]-'0')*10)>0)&&(k>0)&&(a[k-1]!='0')){c[k+1]+=c[k-1];}}
printf("%d\n",c[l]);
}

}
