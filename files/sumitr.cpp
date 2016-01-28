#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int a,n,b[100][100],c,d,e=0,temp,f=0,k,j;


scanf("%d",&k);
for(a=0;a<k;a++)
{scanf("%d",&n);
    for(c=0;c<n;c++)
    for(d=0;d<=c;d++)
    {
     scanf("%d",&b[c][d]);
    }
    for(c=n-2;c>=0;c--)
    for(d=0;d<=c;d++)
    {
        if(b[c+1][d]>b[c+1][d+1]){b[c][d]=b[c][d]+b[c+1][d];}
        else{b[c][d]=b[c][d]+b[c+1][d+1];}
    }

printf("%d\n",b[0][0]);
}

}
