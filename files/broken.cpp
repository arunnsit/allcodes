#include<stdio.h>
#include<string.h>
int main()
{int l,c,i,coun,j,p,check,ma;char a[100000],b[200];
scanf("%d",&l);
while(l)                                                 i<c;i++){if(a[i]!=32){for(p=0;p<=j;p++){if(b[p]==a[i]){check=1;break;}}

if(check==0){if(j==l-1){j=0;b[j]=a[i];coun=1;}
else{j++;b[j]=a[i];coun++;}
}
else{coun++;}
if(ma<coun){ma=coun;}


}
else{coun++;}
printf("j%d coun%d\n",j,coun);
 }

 printf("%d\n",ma);


}}
