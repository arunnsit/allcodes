#include<iostream>
using namespace std;
long long int marks1[1000008],marks2[1000008];
long long int gcd(long long int a,long long int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}
long long int gcdExtended(long long int a,long long int b, long long *x, long long *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
 
    long long x1, y1; // To store results of recursive call
    long long gcd = gcdExtended(b%a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}
int main()
{
	long long int m,h1,a1,x1,y1,h2,a2,x2,y2,i,j,k,c=0,c2=0,cycle1=0,cycle2=0;
	cin>>m>>h1>>a1>>x1>>y1>>h2>>a2>>x2>>y2;
	while(!marks1[h1])
	{
		marks1[h1]=c++;
		h1=(x1*h1+y1)%m;
	}
	while(!marks2[h2])
	{
		marks2[h2]=c2++;
		h2=(x2*h2+y2)%m;
	}
	if(marks1[a1]>=marks1[h1]&&marks2[a2]>=marks2[h2])
		{   //long long int x=marks1[a1],y=marks2[a2];
			cycle1=c-marks1[h1];
			cycle2=c2-marks2[h2];
			cout<<cycle1<<" "<<marks1[a1]<<" "<<cycle2<<" "<<marks2[a2]<<endl;
			long long int x,y;
			gcdExtended(cycle1,cycle2,&x,&y);
			cout<<x<<" "<<y;
			if(((marks1[a1]-marks2[a2])/(cycle1-cycle2))*(cycle1-cycle2)==(marks1[a1]-marks2[a2]))        
			cout<<((marks1[a1]-marks2[a2])/(cycle1-cycle2))<<endl;
		    else cout<<-1<<endl;
		}
	else cout<<-1;
}