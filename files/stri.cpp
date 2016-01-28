#include<string.h>
#include<iostream>
using namespace std;
int main()
{int i=0,j,k,l2,l,n,t,ma=0,temp;char a[3][100];t=2;l2=0;
cin>>n;
cin.get();
for(i=0;i<n;i++){
                 cin.getline(a[t],100);
                 l=strlen(a[t]);
                 if(l>l2){temp=t;t=ma;ma=temp;l2=l;}
                 else{t=1;}
                }
cout<<a[ma];
}
