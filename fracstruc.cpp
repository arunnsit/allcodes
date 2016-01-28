#include<iostream>
using namespace std;
struct frac{
    int n,d;
    };
int gcd(int a,int b){if(b==0){
    return a;
    }
    else{
        return gcd(b,a%b);
    }}






 frac add(frac a,frac b){
     frac c;int t;
     c.n=a.n*b.d+a.d*b.n;
     c.d=b.d*a.d;
     t=gcd(c.n,c.d);
    c.n=c.n/t;c.d=c.d/t;
     return c;
 }


int main(){
    frac a,b,c;char ch[]="coding blocks",*p=&ch[2];
    cin>>a.n>>ch>>a.d;
    cin>>b.n>>ch>>b.d;
    c=add(a,b);
    cout<<c.n<<"/"<<c.d<<endl<<ch<<endl<<*p;



}
