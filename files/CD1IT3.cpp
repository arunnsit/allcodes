//alpha coder
#include<stdio.h>
#include<algorithm>
int main(){
    long long int  n,k,a[1003],i,br,start,end;
    scanf("%lld %lld",&n,&k);
    for(i=0;i<n;i++)scanf("%lld",&a[i]);
    std::sort(a,a+n);
    start=0;end=n-1;br=0;
    while(end>=0){
            for(start=0;start<end;start++){
                if(a[end]+a[start]==k){
                        br=1;
                    break;
                }
                if(a[end]+a[start]>k){
                    break;
                }
            }

            if(br==1)break;
            else end--;}
            if(br==1)printf("Yes\n");
            else printf("No\n");


}
