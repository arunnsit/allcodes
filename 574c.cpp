#include<iostream>
using namespace std;
long long int a[100009];
int main(){
	long long int n,i,j;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
		while(1){
			if(a[i]%2==0)a[i]/=2;
			else if(a[i]%3==0)a[i]/=3;
			else break;
		}
	}
	j=a[0];
	for(i=1;i<n;i++)if(a[i]!=j)break;
	if(i==n)cout<<"Yes\n";
	else cout<<"No\n";	
}