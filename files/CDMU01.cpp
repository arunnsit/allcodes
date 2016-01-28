#include<stdio.h>
#include<algorithm>
void sort(int c[12][2],int n){
    for(int i=0;i<=9;i++){
        for(int j=1;j<=9;j++){
            if(c[j-1][0]>c[j][0]){
                int temp=c[j][0];
                c[j][0]=c[j-1][0];
                c[j-1][0]=temp;
                temp=c[j][1];
                c[j][1]=c[j-1][1];
                c[j-1][1]=temp;
            }
        }
    }
}
int main()
{int i,c[12][2],start,end,ma=-1,j,mi=1000000,in;char b[][100]={"Dhaval","Shivang","Bhardwaj","Rishab","Maji","Gaurav","Dhruv","Nikhil","Rohan","Ketan"};
for(i=0;i<10;i++){scanf("%d",&c[i][0]);c[i][1]=i;}
for(j=0;j<5;j++){
        ma=-1,mi=1000000;
for(i=0;i<10;i++){
    if(ma<c[i][0]&&c[i][0]!=-1){
        ma=c[i][0];
        in=c[i][1];
    }
}
c[in][0]=-1;
printf("%s\n",b[c[in][1]]);
for(i=0;i<10;i++){
    if(mi>c[i][0]&&c[i][0]!=-1){
        mi=c[i][0];
        in=c[i][1];
    }
}
c[in][0]=-1;
printf("%s\n",b[c[in][1]]);

}}
