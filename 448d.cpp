#include<iostream>
using namespace std;
long long int n,m,i,j,k,x,y,sol,fsol=1;
long long int binary(long long int x)
{
	long long int count=0;

    for(int i=1;i<=n;i++)count+=(m>(x-1)/i)?(x-1)/i:(m);
    return count;	
}

int main()
{
cin>>n>>m>>k;

x=1;
y=n*m+1;
while(x<y)
{   long long int mid=((y+x)>>1);
	sol=binary(mid);
	 if(sol<k)x=mid+1;
	else y=mid;
	fsol=mid;
}
cout<<x-1;


}
