#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,k,i,t,ctr,d,j;
    cin>>t;
    while(t--)
    {
      cin>>n>>k;
      long long int p[100009];
      long long int ch[100009]={0};
      ctr=d=1;
      int lp=1,hp=k+1;
      for(i=0;i<n;i++)
      {
        if(i-lp+1>=k){
        	p[i]=lp;
        	ch[p[i]]++;
        	while(ch[lp])
        	{
        		lp++;
        	}
        }
        else{
        	p[i]=hp;
        	ch[p[i]]++;
        	while(ch[hp])
        	{
        		hp++;
        	}
        }
      }
    for(i=1;i<=n;i++)
     {
         if(abs(i-p[i-1])<k)
            break;
     }
     for(j=0;j<n;j++)
            cout<<p[j]<<" ";
          cout<<endl;
     
      if(i==n+1)
      {
          for(j=0;j<n;j++)
            cout<<p[j]<<" ";
          cout<<endl;
      }
      else
        cout<<"-1\n";
 
    }
}