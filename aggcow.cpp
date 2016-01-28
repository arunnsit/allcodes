#include<stdio.h>
#include<algorithm>
long long int arr[1000000],n,c;
int cows(int x){
    long long int lastcow=arr[0],cow=1;
    for(int i=1;i<n;i++){
        if(arr[i]-lastcow>=x){
            cow++;
            lastcow=arr[i];
            if(cow==c)return 1;
        }
    }
    return 0;

}
int binary(){
    long long int start=0 ,end=arr[n-1],mid;
    while(start<end){
        mid=(start+end)/2;
        if(cows(mid)==1){
            start=mid+1;
        }
        else end=mid;}
        return start-1;
    }

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    scanf("%lld %lld",&n,&c);
    for(int i=0;i<n;i++)scanf("%lld",&arr[i]);
    std::sort(arr,arr+n);
    printf("%d\n",binary());
}
}
