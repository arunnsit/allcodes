#include<iostream>
#include<algorithm>
using namespace std;
long long int ways[2][5]={0},mod=1000000007;
int main()
{
	int n,i,j,k;
	cin>>n;
	ways[1][1]=1;
	ways[1][2]=1;
	ways[1][3]=1;
	for(i=2;i<=n;i++)
	{
		ways[i%2][1]=(ways[(i-1)%2][2]+ways[(i-1)%2][3]+ways[(i-1)%2][4])%mod;
		ways[i%2][2]=(ways[(i-1)%2][1]+ways[(i-1)%2][3]+ways[(i-1)%2][4])%mod;
		ways[i%2][3]=(ways[(i-1)%2][1]+ways[(i-1)%2][2]+ways[(i-1)%2][4])%mod;
		ways[i%2][4]=(ways[(i-1)%2][2]+ways[(i-1)%2][3]+ways[(i-1)%2][1])%mod;
	}
	cout<<ways[n %2][4]<<endl;

}
