#include<iostream>
#include<vector>
using namespace std;
vector<int>adj[4002];
int sol=99999999;
void dfs(int start,int l,int s,int v[4002]){
	cout<<start<<" "<<l<<" "<<s<<endl;
	if(l>3)return;
	if(l==3&&v[start]==1){
		sol=sol>s-6?s-6:sol;
		return;
	}
	if(v[start]==1)return;
	v[start]=1;
	for(int i=0;i<adj[start].size();i++){
		dfs(adj[start][i],l+1,s+adj[start].size(),v);}
}
int main(){
	int n,m,x,y,i;
	cin>>n>>m;
	while(m--){
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(i=1;i<=n;i++){
		int v[4002]={0};
			dfs(i,0,0,v);
	}
	cout<<sol;
}