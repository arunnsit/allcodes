#include<iostream>
using namespace std;
void insertion(int a[100],int i,int n){
    if(i==n)return;
    for(int j=i-1;j>=0;j--){
        if(a[i]<a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    return insertion(a,i+1,n);
}
int main(){
    int a[10]={9,3,5,6,8,11};
    insertion(a,0,6);
    for(int i=0;i<6;i++)cout<<" "<<a[i];
}
