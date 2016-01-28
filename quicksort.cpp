#include<iostream>
using namespace std;
int partit(int a[1000],int start,int end){
    int temp,z;z=end;
    while(start<end-1){
            if(a[start]>a[end-1]){
                    temp=a[start];
                    a[start]=a[end-1];
                    a[end-1]=temp;
                    start++;
                    end--;
            }
            else{start++;
            end--;
            }
    }
   temp= a[start];
   a[start]=a[z];
   a[z]=temp;
   return start;
}

int quicksort(int a[1000],int start,int end){
    if(start>=end){return 0;}
    int piv;
    piv=partit(a,start,end);
    quicksort(a,start,piv);
    quicksort(a,piv+1,end);
}
int main (){
    int n,i,a[1000];
    cin>>n;
    for(i=0;i<n;i++)cin>>a[i];
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)cout<<a[i]<<" ";
}
