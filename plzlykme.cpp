#include<stdio.h>
#include<math.h>
int main()
{int t;long long int l,d,c,s;
scanf("%d",&t);
while(t){scanf("%lld %lld %lld %lld",&l,&d,&s,&c);
if(log(l)<=((d-1)*log(1+c))+log(s)){
    printf("ALIVE AND KICKING\n");
}
else    { printf("DEAD AND ROTTING\n");}



t--;}

}
