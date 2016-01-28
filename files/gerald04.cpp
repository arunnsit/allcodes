#include<stdio.h>
#include<algorithm>
int main(){
    int t,a,b,c,d,e,f;
    scanf("%d",&t);
    while(t){
            scanf("%d:%d",&a,&b);
            scanf("%d:%d",&c,&d);
            scanf("%d",&e);f=60*(a-c)+b-d+e;
            printf("%d.0 %.1f\n",f,(2*e<=f-e)?f-e:(float)(f-e)/2+e);

    t--;}
}
