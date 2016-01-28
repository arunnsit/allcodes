#include<iostream>
using namespace std;
int main()
{
    long long int t,n,m,p,q,s,i;
    long long int vpos,rpos,ctr;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>s>>p>>q;
        vpos=rpos=0;
        ctr=0;
        for(i=1;i<=s;i++)
        {
            vpos+=p;
            rpos+=q;
            if(vpos>n)
                vpos=(vpos-n)%(n-m+1)+m-1;
            if(rpos>n)
                rpos=(rpos-n)%(n-m+1)+m-1;
            if(vpos==rpos)
                ctr++;
        }
        cout<<ctr<<endl;
    }
    return 0;
} 