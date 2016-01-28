#include<stdio.h>
long long int tree[1000000][2]={0};
long long int ktree(int n,int k,int d,int a){
    if(n<0)return 0;
    if(a!=0){return tree[n][1];}
    if(a==0&&tree[n][0]!=-1){return tree[n][0];}
    if(n==0)return 0;
    else{
        long long int ans=0,i;
         for(i=1;i<=k;i++){
            ans=(ans+ktree(n-i,k,d,(i>=d)?a+1:a))%1000000007;
        }tree[n][0]=ans;
        return ans;
    }
    }

long long int ktree2(int n,int k){
    if(n<0)return 0;
    if(n==0){return 1;}
    if(tree[n][1]!=0)return tree[n][1];
    else{
        long long int ans=0,i;
        for(i=1;i<=k;i++){
            ans=(ans+ktree2(n-i,k))%1000000007;
        }
        tree[n][1]=ans;
        return ans;
    }
    }

int main()
{int n,k,d,i;
tree[0][1]=1;
for(i=0;i<1000;i++)tree[i][0]=-1;
scanf("%d %d %d",&n,&k,&d);
ktree2(n,k);
printf("%I64d\n",ktree(n,k,d,0));
}
