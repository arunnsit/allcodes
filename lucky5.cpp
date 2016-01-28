#include<stdio.h>
int main()
{char a[100002];int c,t,i;
scanf("%d",&t);
while(t){scanf("%s",&a);c=0;
for(i=0;a[i]!='\0';i++){if(a[i]!='7'&&a[i]!='4')c++;}
    printf("%d\n",c);
t--;}
}
