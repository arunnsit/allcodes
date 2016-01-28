#include<iostream>
#include<math.h>
using namespace std;
float gp(int k)
{if(k==1){return 1;}
else return (float)1/(pow(2,k))+gp(k-1);

}
int main()
{int k;float o;
cin>>k;
o=gp(k);
cout<<o;}
