#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f,n,x=0;
	cin>>a>>b>>c>>d>>e>>f>>n;
	a+=b+c;
	d+=e+f;
	if(a%5==0)x+=a/5;
	else x+=a/5+1;
	if(d%10==0)x+=d/10;
	else x+=d/10+1;
	if(x<=n)cout<<"YES\n";
	else cout<<"NO\n";
}