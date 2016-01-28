#include<stdio.h>
#include<algorithm>
int main()
{long long int t,n,q,mid,l,r,in,i,l2;
scanf("%lld %lld",&n,&q);
l=n+2;r=3*n;mid=(l+r)/2;
for(i=0;i<q;i++){
    scanf("%lld",&in);
    if(in>=l&&in<=r){l2=std::max(mid-in,in-mid);
        printf("%lld\n",n-(l2));
    }
    else {printf("0\n");}


}
}





