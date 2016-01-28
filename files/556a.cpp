#include<stdio.h>
#include<algorithm>
char a[200009];
int n;
int main(){
scanf("%d",&n);
scanf("%s",a);
int i,o=0,on=0;
for(i=0;i<n;i++){
if(a[i]=='0')o++;
else on++;
}
printf("%d\n",abs(on-o));
}