#include<bits/stdc++.h>
using namespace std;

int  lcs( string X, string Y, int m, int n )
{
   int L[m+1][n+1];
 
   /* Following steps build L[m+1][n+1] in bottom up fashion. Note
      that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
   for (int i=0; i<=m; i++)
   {
     for (int j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
 
  
   return L[m][n];
   }  
int main()
{
	string s,t;
	int i,c=500,j,a[30]={0},b[30]={0},l1,l2;
	cin>>s>>t;
	c=s.find(t);
	l1=s.size();
	l2=t.size();
	c=lcs(s,t,l1,l2);
	if(c==l2){
		cout<<"automaton\n";
	}
	else{
		for(i=0;i<l1;i++)a[s[i]-97]++;
		for(i=0;i<l2;i++)b[t[i]-97]++;	
        for(i=0;i<27;i++)if(a[i]!=b[i])break;
        if(i==27)cout<<"array\n";
        else{
        	for(i=0;i<27;i++)if(b[i]>a[i])break;
        	if(i==27)cout<<"both\n";
        	else cout<<"need tree\n";	
        }	
	}

}