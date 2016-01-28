#include<stdio.h>
#include<algorithm>
int main()
{int t,a[13],i,k,temp,check,r;
scanf("%d",&t);
while(t){int b[103]={0},sum=0;check=0;float ans=1;
for(i=0;i<11;i++){scanf("%d",&a[i]);b[a[i]]++;}
scanf("%d",&k);std::sort(a,a+11);
temp=a[11-k];check=1;
for(i=11-k+1;i<11;i++){if(a[i]==a[11-k]){check++;}}
r=1;
for(i=b[a[11-k]];i>b[a[11-k]]-check;i--){ans=(float)(ans*i)/r;r++;
}printf("%0.0f\n",ans);
t--;}

}
