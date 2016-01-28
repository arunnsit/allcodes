#include<stdio.h>
#include<algorithm>
using namespace std;
int K[2][502*502]={0};
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i,j,a[600],s=0,w,W;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			s+=a[i];
		}
		for(i=0;i<=s+2;i++)K[0][i]=0;
		for(i=0;i<=s+2;i++)K[1][i]=0;	
        W=s/2;
         for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i%2][w] = 0;
           else if (a[i-1] <= w)
                 K[i%2][w] = max(a[i-1] + K[(i-1)%2][w-a[i-1]],  K[(i-1)%2][w]);
           else
                 K[i%2][w] = K[(i-1)%2][w];
       }
   }
   if(K[n%2][W]==s-K[n%2][W])printf("YES\n");
   else printf("NO\n");
	}
}