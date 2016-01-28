#include<stdio.h>
int main()
{int t,l,lc,i,coun;char a[1002];
scanf("%d",&t);
while(t){scanf("%d",&l);scanf("%s",&a);
coun=0;lc=l;if(a[0]=='1'){coun++;if(a[1]=='0'){coun++;a[1]='5';}}if(a[l-1]=='1'&&l>1){coun++;if(a[l-2]=='0'){coun++;a[l-2]='5';}}
for(i=1;i<l-1;i++){if(a[i]=='1'){coun++;if(a[i-1]=='0'){coun++;a[i-1]='5';}if(a[i+1]=='0'){coun++;a[i+1]='5';}}}
printf("%d\n",lc-coun);t--;


}

}
