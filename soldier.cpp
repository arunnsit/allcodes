#include<iostream>
#include<vector>
struct node{
	int a,b;
};
int dp[105500][10]={0};
using namespace std;
vector<node> v[7];
int main(){
	int n,t,c;
	cin>>n>>t;
	while(n--){
		node a;
		cin>>c>>a.a>>a.b;
		v[c].push_back(a);
	}
	

}