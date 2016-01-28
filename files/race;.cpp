#include<stdio.h>
#include<algorithm>
int l[2010][2010]={0};
int LCS(int a[2010],int b[2010],int c,int d )
{int i,j;
for(i=0;i<=c;i++)
{for(j=0;j<=d;j++)
{if(i==0||j==0){l[i][j]=0;}
else if(a[i-1]==b[j-1]){l[i][j]=l[i-1][j-1]+1;}
else {l[i][j]=std::max(l[i-1][j],l[i][j-1]);}}}
return l[c][d];}

int main()
{int d;int a[2010],b[2010],i,j,k,temp,temp1,coun,ma;
scanf("%d",&d);
while(d)
{temp=1;i=0;j=0;
while(temp){scanf("%d",&temp);a[i]=temp;i++;}
temp1=1;ma=0;scanf("%d",&temp1);
while(temp1){temp=temp1;coun=0;j=0;
while(temp){b[j]=temp;j++;scanf("%d",&temp);}
coun=LCS(a,b,i,j);if(coun>ma){ma=coun;}
scanf("%d",&temp1);}
printf("%d\n",ma);
d--;}

}


