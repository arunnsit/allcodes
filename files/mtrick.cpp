#include<iostream>
using namespace std;
long long multiple(long long a, long long b, long long c) // a * b % c

{

  if (b == 0) {  //Base case a * 0 =0

      return 0;

  }

  long long ret = multiple(a, b >> 1, c);  //Multiply a by (b>>1).

  ret = (ret + ret) % c;  //we double the value of ret i. 2 * (a * (b>>1)). Take MOD in this step

  if (b & 1) {  //implies b is ODD

      ret = (ret + a) % c;  //if b is odd then we express it as a * b = a+ a * (b>>1). We have computed a*(b>>1) in the previous step by recursion i.e the value ret. We now add the extra a to it.

  }

  return ret;
}
int main(){
	long long int l[1003],a,b,c,n,m,i,t,j,d,p,q;
	char s[1003];
	cin>>t;
	while(t--){
	cin>>n;
	for(i=0;i<n;i++)cin>>l[i];
	cin>>a>>b>>c;
	cin>>s;
	int x=0,y=n-1;
	d=1;
	p=1;
	q=0;
	for(i=0;i<n;i++)
	{
		if(s[i]=='R'){
			m=x;
			x=y;
			y=m;
			if(d==1)d=-1;
			else d=1;
		}
		if(s[i]=='A'){
			q=(q%c+a%c)%c;
		}
		if(s[i]=='M'){
			p=multiple(p,b,c);
			q=multiple(q,b,c);
		}
		cout<<(multiple(l[x],p,c)+q%c)%c<<" ";
	x=x+d;
	}
	cout<<"\n";





}
}