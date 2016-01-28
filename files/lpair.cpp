#include<iostream>
#include<algorithm>
using namespace std;
struct node{
    int x;
    int y;
};
bool cmp(node a,node b)
{return a.x<b.x;
}
long long int s=0;
node a[100005];
int b[100005],temp[100005];
void merge(int a[1000009],int x,int y,int z)
{int pos=0,i=x,j=y+1;
    while(i<=y&&j<=z){
        if(a[i]>a[j]){
            temp[pos++]=a[j++];
        }
        else {
            temp[pos++]=a[i++];
        }
    }
    if(i<=y)
        while(i<=y)temp[pos++]=a[i++];
    if(j<=z)
        while(j<=z)temp[pos++]=a[j++];
    for(i=0;i<pos;i++){
        a[i+x]=temp[i];
    }

}
void msort(int start,int end)
{
    if(start==end)return;
    int mid=(start+end)/2;
    msort(start,mid);
    msort(mid+1,end);
    int i,j=mid+1;
    for(i=start;i<=mid;i++){
            while(j<=end&&b[i]>b[j])j++;
            s+=j-mid-1;
    }
    merge(b,start,mid,end);
    return;    
}


int main(){
    int n,m,i,j,x,y;
    cin>>n;
    for(i=0;i<n;i++)cin>>a[i].x>>a[i].y;
    sort(a,a+n,cmp);
    for(i=0;i<n;i++)b[i]=a[i].y;
    msort(0,n-1);  
    //for(i=0;i<n;i++)cout<<b[i]<<endl;      
    cout<<s<<endl;
    
        
}