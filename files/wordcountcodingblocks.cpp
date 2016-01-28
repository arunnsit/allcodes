#include<stdio.h>
int main()
{char t,p=1,r=0;;t='a';
while(t!='$'){r++;
scanf("%c",&t);if(t==' '){p++;}}
printf("number of words:%d\nnumber of characters%d\n",p,r);
}
