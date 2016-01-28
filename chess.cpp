#include<iostream>
using namespace std;
int main(){
    int n,a[100][100]={0},i,j,k,l,coun=0;
    cin>>n;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++){
        if(a[i][j]==0){
            for(k=i,l=j;k<n&&l<n;k++,l++)a[k][l]=1;
             for(k=i,l=j;k>=0&&l>=0;k--,l--)a[k][l]=1;
              for(k=i,l=j;k<n&&l<n;l++)a[k][l]=1;
               for(k=i,l=j;k<n&&l<n;k++)a[k][l]=1;
                for(k=i,l=j;k>=0&&l>=0;k--)a[k][l]=1;
                 for(k=i,l=j;k>=0&&l>=0;l--)a[k][l]=1;
                 for(k=i,l=j;k>=0&&l<n;k--,l++)a[k][l]=1;
                 for(k=i,l=j;k<n&&l>=0;k++,l--)a[k][l]=1;



            coun++;

        }
    }
    cout<<coun;
}
