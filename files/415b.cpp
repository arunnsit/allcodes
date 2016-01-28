#include<iostream>
using namespace std;
int main(){
	int n,i;
    long long int a,b,x,y;
    cin>>n>>a>>b;
    long long int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++){
    	x=(arr[i]*a)/b;
    	y=(x*b);
    	if(y%a==0)y/=a;
    	else y=y/a+1;
    	cout<<arr[i]-y<<" ";
    }
        
    return 0;
}