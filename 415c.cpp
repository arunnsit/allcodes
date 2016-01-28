#include<iostream>
using namespace std;
int prime[1000009]={0},sieve[10000009]={0};
int main(){
	int i,j,k,pos=0,n,x,a,b;
	for(i=2;i<100000;i++){
		if(sieve[i]==0)
			for(j=2*i;j<10000000;j+=i)
				sieve[j]++;
	}
	for(i=1;i<10000000;i++)if(sieve[i]==0)prime[pos++]=i;
	cin>>n>>k;
    if(k==0&&n==1)cout<<"1\n";
	else if(k<n/2||n<2)cout<<"-1\n";
	else {
		x=k-(n-2)/2;
		a=x;
		b=2*x;
		cout<<a<<" "<<b<<" ";
		i=0,j=0;
		while(i<n-2){
			if(prime[j]!=a&&prime[j]!=b){
				cout<<prime[j]<<" ";
				i++;
			}
			j++;
		}
        cout<<endl;
	}	
}