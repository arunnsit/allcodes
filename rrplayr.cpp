#include<stdio.h>
int main()
{float t,n,i,ans,te,te2;
scanf("%f",&t);
while(t){scanf("%f",&n);ans=0;te=1;te2=1;
while(te2<=n){
    ans+=(te/te2);
    te2++;
}
    printf("%0.1f\n",ans*n);
t--;}

}
