#include<string.h>
#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<stdio.h>
using namespace std;

int dp[157][157][157]={0};
int solve(int pos,int count ,int pos2,string acr,string setbaby[157],int total)
{   //cout<<pos<<" "<<count<<" "<<pos2<<" "<<total<<endl;
	if(pos==acr.length()&&count==total)
		return 1;
	if(pos==acr.length()||count==total+1)
		return 0;
	int i,j,sol=0;
	if(dp[pos][count][pos2]!=-1)return dp[pos][count][pos2];
	for(i=pos2;i<setbaby[count].length();i++)
	{   //cout<<(int)acr[pos]<<" "<<(int)setbaby[count][i]<<endl;
		if(acr[pos]+32==setbaby[count][i])
		{
			sol+=solve(pos+1,count,i+1,acr,setbaby,total);
		}
	}
	if(pos2!=0)
		sol+=solve(pos,count+1,0,acr,setbaby,total);
	return dp[pos][count][pos2]=sol;
}

int main()
{
		int n,i,k,j,l;
		cin>>n;
		while(n!=0)
		{
		string a[157];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int x;
		string ap,lcase;
		char lc[]="LAST CASE";
		for(i=0;lc[i]!='\0';i++)
        lcase.push_back(lc[i]);
        //lcase.push_back('\0');
        getchar();
 	    getline(cin,ap);
		while(ap!=lcase)
		{            // cout<<ap<<" "<<lcase<<" "<<(ap==lcase)<<endl;
			string b,acr;
			string setbaby[157];
			int total=0;
			for(i=0;ap[i]!='\0';i++)
			{
				if(ap[i]==' ')
				{ 
					break;
				}
				else acr.push_back(ap[i]);
			}
			i++;
		    string temp[150];
		    int cont=0;
			for(;ap[i]!='\0';i++)
			{   //cout<<"io:"<<ap[i]<<endl;
				if(ap[i]==' ')
				{   
					for(k=0;k<n;k++)
						if(a[k]==temp[cont])
							break;
						if(k==n)
							setbaby[total++]=temp[cont];
					cont++;
				}
				else temp[cont].push_back(ap[i]);
			}
			for(k=0;k<n;k++)
						if(a[k]==temp[cont])
							break;
						if(k==n)
							setbaby[total++]=temp[cont];
			for(i=0;i<=acr.length()+1;i++)
				for(j=0;j<=total+1;j++)
					for(k=0;k<=157;k++)
						dp[i][j][k]=-1;
			//for(i=0;i<total;i++)cout<<setbaby[i]<<" "<<setbaby[i].length()<<endl;
			//cout<<"acr:"<<acr.length()<<endl;
			int sol=solve(0,0,0,acr,setbaby,total-1);
			if(sol==0)cout<<acr<<" is not a valid abbreviation"<<endl;
			else cout<<acr<<" can be formed in "<<sol<<" ways"<<endl;	
			getline(cin,ap);
		}
		cin>>n;
	}
}