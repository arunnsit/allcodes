#include<stdio.h>
#include<algorithm>
#define y 1000000000
int k=0;
int coun(int a[],int n){int b=1,m=0;
    for(int i=0;i<n-1;i++){if(a[i]==a[i+1])b++;else{b=1;}m=std::max(b,m);if(a[i]>y)break;}
    if(m>=n-1)return 1;
    return 0;
}
int flush(int a[],int n){int b=a[0],i,j;
for( i=0;i<n;i++){if(a[i]>0){b=a[i];break;}}
for(j=0;j<i;j++){a[j]=b*k;}

for(;i<n;i++){
    a[i]-=b;
}
 return 0;
}
int main()
{int t,n,i,a[2000];
scanf("%d",&t);
while(t){int times=100,ch=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    std::sort(a,a+n);
    flush(a,n);
    std::sort(a,a+n);
if(coun(a,n)){printf("YES\n");}
else{
        while(times){
                for(i=0;i<n-1;i++){a[i]+=a[n-1]*k;}
                a[n-1]=0;
                std::sort(a,a+n);
                flush(a,n);
                std::sort(a,a+n);
                if(coun(a,n)){ch=1; break;}


        times--;}
        if(ch==1){printf("YES\n");}
        else printf("NO\n");

}t--;
}}


