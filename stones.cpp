#include<stdio.h>
#include<string.h>
int main(){
int t,k,p,l1,l2;
scanf("%d",&t);
while(t){char a[105],b[105];int h[258]={0};p=0;
scanf("%s %s",&a,&b);
l1=strlen(a);l2=strlen(b);
for(k=0;k<l1;k++){h[a[k]]=1;}
for(k=0;k<l2;k++){if(h[b[k]]==1){p++;}}
printf("%d\n",p);t--;
}
}


