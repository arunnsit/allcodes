#include<stdio.h>
int main(){
    int t,i,c,o;long long a,b;
    scanf("%d",&t);
    while(t){b=0;c=0;
    for(i=0;i<15;i++){
        scanf("%lld",&a);
        b=b^a;
    }
    for(i=0;i<34;i++){
        if(1&(b>>i))c++;
    }
    scanf("%d",&o);
    if(c>o)printf("YES\n");
    else printf("NO\n");


    t--;}
}
