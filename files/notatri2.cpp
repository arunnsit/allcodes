 #include<stdio.h>
 #include<algorithm>
 long long int a[10000];
 int main(){
 	int n;
 	scanf("%d",&n);
 	while(n){
 		int i,j,k=0;
 		for(i=0;i<n;i++){
 			scanf("%lld",&a[i]);
 		}
 		std::sort(a,a+n);
        long long int s=0;
        for(i=0;i<n-2;i++){
        	k=i+2;
        	for(j=i+1;j<n-1;j++){

        		while(a[i]+a[j]>=a[k]&&k<n){
        			k++;
        		}
        		s+=(n-k);
        	}
        }
        printf("%lld\n",s);
 	scanf("%d",&n);

 	}
 }