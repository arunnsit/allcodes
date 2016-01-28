    #include<stdio.h>
    #include<algorithm>
    using namespace std;
    long long int K[2][505];
    struct node{
    	int l,r,val;
    };
    bool cmp(node a,node b){
    	return a.l<b.l;
    }
    bool cmp2(node a,node b){
    	return a.r<b.r;
    }
     
    int main(){
    	int t=0;
    	scanf("%d",&t);
    	while(t--){
    		int n,k,m,i,j;
    		scanf("%d %d %d",&n,&k,&m);
    		long long int a[100005],c[100005],coun[505]={0};
    		node b[100005],d[100005];
            for(i=0;i<n;i++)scanf("%lld",&a[i]);
            for(i=0;i<n;i++)c[i]=600;	
            for(i=0;i<m;i++){
            	scanf("%d %d %d",&b[i].l,&b[i].r,&b[i].val);
                b[i].l--;
                b[i].r--;
                d[i].l=b[i].l;
                d[i].r=b[i].r;
                d[i].val=b[i].val;
            }
            coun[502]=2;
            sort(b,b+m,cmp);
            sort(d,d+m,cmp2);
            int x=0,y=0;
            for(i=0;i<n;i++){
            	if(b[x].l==i){
            		while(b[x].l==i){
            			coun[b[x].val]++;
            			x++;
            		}
            	}
            		for(j=0;j<505;j++)if(coun[j])break;
            		c[i]=j;
            	if(d[y].r==i){
            		while(d[y].r==i){
            			coun[d[y].val]--;
            			y++;
            		}		
     
            	}
            }
            long long int val[100005],wt[100005],sum=0,u=0;
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