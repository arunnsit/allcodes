#include<iostream>
using namespace std;

char fibo(int n)
{int f=0,s=1,third=0;
while(third<=n){
                 cout<<third<<" ";
                 third=f+s;
                 f=s;
                  s=third;
               }
                 return 0;
}

int main()
     {int n;
     cin>>n;
     fibo(n);

     }
