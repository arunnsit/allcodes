
#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int t,l,r,n,a[100][100],i,j,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&l,&r);n=r-l+1;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){x=(l+i-1)^(l+j-1);
                cout<<setw(3)<<x;
            }
            printf("\n");
        }
    }
}
