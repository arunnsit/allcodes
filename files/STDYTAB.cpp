#include<stdio.h>
#include<algorithm>
using namespace std;
int MAX=5000;
long long triangle[5000 + 1][5000 + 1]={0};
long long int mod=1000000000;
void makeTriangle() {
    int i, j;
    long long int p=0;
    // initialize the first row
    triangle[0][0] = 1; // C(0, 0) = 1

    for(i = 1; i < MAX; i++) {
        triangle[i][0] = 1; // C(i, 0) = 1
        for(j = 1; j <= i; j++) {
            p = (triangle[i - 1][j - 1]+ triangle[i - 1][j]);
            while(p>=mod)p-=mod;
            triangle[i][j]=p;
        }
    }
}

int main(){
    int t,n,m,i,j,x,y;
    scanf("%d",&t);
    makeTriangle();
    while(t--){
            long long int a[2][2001]={0},s=0,u,b[2001];
            scanf("%d %d",&n,&m);
            s=0;
            u=0;
            for(i=0;i<=m;i++){
                    a[1][i]=triangle[i+m-1][m-1];
                    b[i]=a[1][i];
                    }



    for(i=2;i<=n;i++)
    {   x=i%2;
        y=abs(x-1);
        s=0;
        u=0;
        for(j=m;j>=0;j--){
                u=(u+a[y][j])%mod;
                a[x][j]=(u*b[j])%mod;
                s=(s+a[x][j])%mod;
                //printf("%lld\n",a[x][j]);

        }
    }
    s=0;
    for(i=0;i<=m;i++){
        s=(s+a[n%2][i])%mod;
    }
    printf("%lld\n",s);
    }
}
