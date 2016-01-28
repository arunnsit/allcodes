#include<iostream>
using namespace std;
int main()
{int a[100],i,j,k,t=0,si;cout<<"enter the size";cin>>si;

for(i=0;i<si;i++){cin>>a[i];
}
cout<<"enter the number";cin>>k;
for(i=0;i<si;i++){if(a[i]==k){cout<<"YES";t=1;break;}
}
if(t==0){cout<<"not found";
}


}
