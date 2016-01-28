#include<iostream>
using namespace std;
int b[1000000]={0};
void dupliremover(int a[1000],int n)
{int i;
    for(i=0;i<n;i++){b[a[i]]++;if(b[a[i]]>1){a[i]=1000001;}}
for(i=0;i<n;i++){if(a[i]<1000001){cout<<a[i]<<"\n";}

}}
int main()
{int n , a[1000],i;
cin>>n;
for(i=0;i<n;i++){cin>>a[i];}
dupliremover(a,n);

}
