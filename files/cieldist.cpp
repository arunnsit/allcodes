#include<stdio.h>
#include<algorithm>
int main()
{int t;float dt,ds,d,ans;
scanf("%d",&t);
while(t){
        scanf("%f %f %f",&ds,&dt,&d);ans=0;
if(ans<d-ds-dt)ans=d-ds-dt;
if(ans<ds-d-dt)ans=ds-d-dt;
if(ans<dt-d-ds)ans=dt-d-ds;
printf("%0.6f\n",ans);


t--;}


}
