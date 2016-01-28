#include<stdio.h>
int main()
{int t,n,i,p;char a[100004];
scanf("%d",&t);
while(t)
{scanf("%s",&a);p=1;
for(i=1;a[i+1]!='\0';i++){if(a[i]=='1'&&a[i-1]=='0'&&a[i+1]=='0'){printf("Good\n");p=0;break;}if(a[i]=='0'&&a[i-1]=='1'&&a[i+1]=='1'){printf("Good\n");p=0;break;}}
if(p){printf("Bad\n");}

t--;}

}
