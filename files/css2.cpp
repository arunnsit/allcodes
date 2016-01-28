#include<iostream>
#include<map>
using namespace std;

int main(){
	int n,m,a,v,p,id;
	cin>>n>>m;
	map<pair<int,int>,int>prio,val;
	while(n--)
	{
		cin>>a>>id>>v>>p;
		if(prio[make_pair(a,id)]>=p){
			prio[make_pair(a,id)]=p;
			val[make_pair(a,id)]=v;
		}
	}
	while(m--){
		cin>>a>>id;
		cout<<val[make_pair(a,id)]<<endl;

	}
}