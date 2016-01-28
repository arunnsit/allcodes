    #include<stdio.h>
    #include<algorithm>
    using namespace std;
    long long int K[2][505];
    int main(){
    	int t=0;
    	scanf("%d",&t);
    	while(t--){
    		int n,k,m,i,j;
    		scanf("%d %d %d",&n,&k,&m);
    		int a[100005],b[100005][3],c[100005];
            for(i=0;i<n;i++)scanf("%d",&a[i]);
            for(i=0;i<n;i++)c[i]=600;	
            for(i=0;i<m;i++){
            	scanf("%d %d %d",&b[i][0],&b[i][1],&b[i][2]);
                for(j=b[i][0]-1;j<=b[i][1]-1;j++){
                	c[j]=min(c[j],b[i][2]);
                } 
            }
            int val[100005],wt[100005],u=0;
            long long int sum=0;
            for(i=0;i<n;i++){
            	if(a[i]<0){
            		val[u]=-1*a[i];
            		wt[u]=c[i];
            		u++;
            	}
            	sum+=a[i];
            }
            int w;
            for (i = 0; i <= u; i++)
       {
           for (w = 0; w <= k; w++)
           {
               if (i==0 || w==0)
                   K[i%2][w] = 0;
               else if (wt[i-1] <= w)
                     K[i%2][w] = max(val[i-1] + K[(i-1)%2][w-wt[i-1]],  K[(i-1)%2][w]);
               else
                     K[i%2][w] = K[(i-1)%2][w];
           }
       }
       printf("%lld\n",sum+K[u%2][k]);
    	}
    } 