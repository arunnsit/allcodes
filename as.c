#include<stdio.h>
int main()
{int c=0,a=0,i=0,u=0,x=0;
char t='u';
switch(t){
    three:default:x++;printf("x\n");break;
    two:five:case 'u':u++;printf("u\n");break;
    four:six:case 'i':i++;printf("i\n");break;
        one:case 'a':a++;printf("a\n");break;

}
printf("path %c\n",t);
switch(c++){
    case 0:t='a';printf("0\n");goto four;
    case 1:t='a';printf("1\n");goto three;
    case 2:t='a';printf("2\n");goto two;
    case 3:printf("3\n");goto two;
}
if(a)
{fo:a=7;t='o';}
if(t=='a'){goto fo;}
    printf("%d %d %d %d\n",a,i,u,x);
}
