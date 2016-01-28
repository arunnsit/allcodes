#include<stdio.h>
#include<math.h>
#include<algorithm>
int main(){
    int t;double a,b,c,d,ans,s;
    scanf("%d",&t);
    while(t){
        scanf("%lf %lf %lf",&a,&b,&c);
        ans=(a*b*c)/sqrt((a+b+c)*(a+b-c)*(b+c-a)*(a+c-b));
        printf("%0.2lf\n",ans);

    t--;}
}
