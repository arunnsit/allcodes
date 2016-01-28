#include<stdio.h>
int main(){
    long long int n,m,sol=1,mod=1000000007;char a[102][102];
    scanf("%I64d %I64d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%s",&a[i]);
    }
    for(int j=0;j<m;j++){
            int has[30]={0},c=0;
            for(int i=0;i<n;i++){
                if(has[a[i][j]-65]==0){
                    has[a[i][j]-65]++;
                    c++;
                }
            }
            sol=(sol*c)%mod;

    }
    printf("%I64d\n",sol);


}
