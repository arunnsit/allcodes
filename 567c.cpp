#include<stdio.h>
#include<unordered_map>
using namespace std;
long long C(int n, int r) {
    if(r > n / 2) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}

long long int a[200009],ma=1000000009,mi=-1000000009;
int main(){
	long long int n,k,temp,i;
	scanf("%I64d %I64d",&n,&k);
	unordered_map<long long int ,long long int> map1,map2;
	
	if(k>1){
		long long int c=0;
		for(i=0;i<n;i++){
			scanf("%I64d",&a[i]);
		    map1[a[i]]++;
		    if(a[i]%k==0)map2[a[i]]+=map1[a[i]/k];
			if(a[i]%k==0&&a[i]%(k*k)==0){
				c+=map2[a[i]/k];
			}
		}
		printf("%I64d\n",c);
	}
	else{
		long long int c=0;
		for(i=0;i<n;i++){
			scanf("%I64d",&a[i]);
			map1[a[i]]++;
		}
		unordered_map<long long int ,long long int> map2;
		for(i=0;i<n;i++){
			if(map2[a[i]]==0&&map1[a[i]]>=3){
				map2[a[i]]=1;
				c+=C(map1[a[i]],3);
			}
		}
		printf("%I64d\n",c);

	}





}