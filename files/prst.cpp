#include<stdio.h>
int main()
{long long int a;short m,b;
scanf("%lld %hd",&a,&m);a=a*a;
while(a){scanf("%hd",&b);if(b==m){m=-1;printf("YES\n");break;}a--;}
if(m!=-1){printf("NO\n");}
}
