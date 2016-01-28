#include<stdio.h>
#include<iostream>
using namespace std;
#include<vector>
#include<stdio.h>
long long int dp[506][100009]={0},mod=1000000007;
int sp=0;
long long int solve(int n,int m)
{   
    sp++;
    cout<<sp<<endl;
    cout<<n<<" "<<m<<endl;
    if(n==0)
        return 1;
    if(m<=0)
        return 0;
    if(dp[n][m])
        return dp[n][m];
    long long int s=0;
            s=(s+solve(n-1,m-1)+solve(n,m-1))%mod;
    return dp[n][m]=s;    
}
int main(){
    cout<<solve(300,10000)<<endl;

}

