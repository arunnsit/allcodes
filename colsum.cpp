#include<iostream>
using namespace std;
int main()
{int m,n,i,j,a[100][100],col=0,row=0,colma=0,rowma=0;cin>>m>>n;
for(i=0;i<=m;i++)
     for(j=0;j<=n;j++)
          cin>>a[i][j];
for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
            {
                col+=a[i][j];
            }
            if(col>colma){colma=col;}col=0;
    }
   cout<<"max sum of row :"<<colma<<"\n";col=0;colma=0;
for(j=0;j<=n;j++)
         {for(i=0;i<=m;i++)
            {col+=a[i][j];}
            if(col>colma){colma=col;}
            col=0;
         }cout<<"max sum of col :"<<colma;
}
