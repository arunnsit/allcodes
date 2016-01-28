#include<stdio.h>
#include<string.h>
char a[109];
int main()
{int k,l,t=0,p,f,ma;char b,e;
scanf("%d",&t);
while(t){scanf("%s",&a);l=strlen(a);if(l>1){f=2;}else{f=1;}
for(k=1;k<l;k++){ma=2;b=a[k-1];e=a[k];for(p=k+1;p<l;p++){if(b==e&&a[p]!=b){e=a[p];} if(a[p]==b||a[p]==e){ma++;}else{break;}}if(ma>f){f=ma;}}
printf("%d\n",f);t--;}
}
