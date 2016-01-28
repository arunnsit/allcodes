#include<stdio.h>
int main()
{int t,s,i,l;char a[100000],ch;
scanf("%d",&t);
while(t)
{scanf("%s",&a);s=2;ch=a[0];l=0;l++;
for(i=1;a[i]!='\0';i++)
{ch=a[i-1];l++;

if(ch>a[i]){s+=26-ch+a[i];}
else{s+=a[i]-ch;}
s++;
}
if(11*l>=s)printf("YES\n");
else{printf("NO\n");}
 t--;
}

}
