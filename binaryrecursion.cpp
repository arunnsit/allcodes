#include<iostream>
using namespace std;
int binary(int x[100],int y,int start,int p){
    int mid=(start+y)/2;
    if(start>y)
        return -1;
    if(p>x[mid]){
            return binary(x,y,mid+1,p);
    }
    if(p<x[mid]){
            return binary(x,mid-1,start,p);
    }
    return mid;

}

int main()
{int x[100],y,i,p;
cin>>y;
for(i=0;i<y;i++)cin>>x[i];
cin>>p;
cout<<binary(x,y,0,p);
}
