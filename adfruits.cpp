#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int lcs(char a[102],char b[102],int m ,int n)
{int i,j,dp[103][103]={0},cs[103][2]={0},k=0,l=0,p;
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
{if(a[i-1]==b[j-1]){dp[i][j]=1+dp[i-1][j-1];}
 else {dp[i][j]=std::max(dp[i-1][j],dp[i][j-1]);}}

 i=m;j=n;k=dp[m][n]-1;l=dp[m][n]-1;

while(i>0&&j>0)
{
	if(a[i-1]==b[j-1]){
		cs[k][0]=i-1;cs[l][1]=j-1;k--;l--;i--;j--;
	}
else if(dp[i][j-1]>dp[i-1][j]){j--;}
else {i--;}
}
k=0;l=0;i=0;j=0;
while(k<=dp[m][n]-1){
	while(i<cs[k][0]){
		printf("%c",a[i]);i++;
	}
		while(j<=cs[l][1]){
			printf("%c",b[j]);j++;
		}k++;i++;l++;}
while(i<m){printf("%c",a[i]);i++;}while(j<n){printf("%c",b[j]);j++;}printf("\n");
return 0;
}

int main()
{char a[102],b[102];int o,i,j,m,n;while(scanf("%s",a)!=EOF&&scanf("%s",b)!=EOF){
lcs(a,b,m=strlen(a),n=strlen(b));}

}
