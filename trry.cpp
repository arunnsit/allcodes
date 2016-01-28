#include<iostream>
using namespace std;
int main()
{
    int n,m,c,i,no,j,ctr;
    cin>>n>>m>>c;
    int store1[c+3],store2[c+3];
    long long int dp[c+3][c+3];
    memset(store1,0,sizeof(store1));
    memset(store2,0,sizeof(store2));
    for(i=0;i<n;i++)
    {
        cin>>no;
        store2[no]++;
    }
    for(i=0;i<m;i++)
    {
        cin>>no;
        store1[no]+=store2[no];
    }
    
        //cout<<endl;
    //cout<<ctr<<endl;
    memset(dp,0,sizeof(dp));
    dp[1][1]=store1[1];
    for(i=2;i<=c+1;i++)
        dp[1][i]=store1[i]+dp[1][i-1];
    for(i=2;i<=c+1;i++)
    {
        for(j=i;j<=c+1;j++)
        {
            dp[i][j]=((dp[i-1][j-1]*store1[i])+dp[i][j-1])%(1000000007);
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    long long int s=0;
    cout<<ctr<<endl;
    for(i=2;i<=c+1;i++)
       { s=0;
        
       cout<<dp[i+1][i]<<" ";}
       cout<<endl;
    return 0;
}