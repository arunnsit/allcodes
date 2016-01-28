#include<stdio.h>
#include<algorithm>
#include<string.h>
int l[2010][2010]={0};
int LCS(char a[2010],char b[2010],int c,int d )
{int i,j;
for(i=0;i<=c;i++)
{for(j=0;j<=d;j++)
{if(i==0||j==0){l[i][j]=0;}
else if(a[i-1]==b[j-1]){l[i][j]=l[i-1][j-1]+1;}
else {l[i][j]=std::max(l[i-1][j],l[i][j-1]);}}}
return l[c][d];}

int main()
{int d;char a[2010],b[2010];int i,j,k,temp,temp1,coun,ma;

while(scanf("%s",&a)!=EOF&&scanf("%s",&b)!=EOF){i=strlen(a);j=strlen(b);
coun=LCS(a,b,i,j);
printf("%d\n",coun);}


}


