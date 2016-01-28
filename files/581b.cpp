#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    long long int h[n+3],maxbfre[n+3];
    for(i=0;i<n;i++)
        cin>>h[i];
    maxbfre[n-1]=h[n-1];
    maxbfre[n]=0;
    for(i=n-2;i>=0;i--)
        maxbfre[i]=max(maxbfre[i+1],h[i]);
    for(i=0;i<n;i++)
       if(maxbfre[i]<h[i])
        cout<<"0"<<" ";
       else if(maxbfre[i]==h[i]&&maxbfre[i+1]!=maxbfre[i])cout<<"0"<<" ";
       else cout<<maxbfre[i]-h[i]+1<<" ";
    cout<<endl;
    return 0;
}