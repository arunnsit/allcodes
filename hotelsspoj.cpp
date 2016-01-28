#include<iostream>
using namespace std;
long long int a[300005]; 
int main(){
	long long int s=0,m,n,i,j,curr=0;
	cin>>n>>m;
	for(i=0;i<n;i++)cin>>a[i];
	i=0,j=0;	
	while(i<n){
		if(curr<=m&&j<n){
			curr+=a[j];
			j++;
		}
		else if(curr>m){
			curr-=a[i];
			i++;
		}
		//cout<<"oop"<<curr<<endl;
		if(curr<=m&&curr>s)s=curr;
		if(j==n&&curr<=m)break;
	}
	cout<<s<<endl;

}