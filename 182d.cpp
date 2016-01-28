#include<iostream>
#include<vector>
#include<string.h>
#include<unordered_map>
using namespace std;
vector<int> facs;
char a[100009],b[100009],c[100009];
int has[100009]={0};

unordered_map<string,int> map1;
int main()
{
	int i,j,k,l1,l2,csol=0;
	cin>>a>>b;
	l1=strlen(a);
	l2=strlen(b);
    
	for(i=1;i*i<=l1;i++)if(l1%i==0)has[i]++,has[l1/i]++;
	for(i=1;i*i<l2;i++)
	{
		if(l2%i==0){
			if(has[i])facs.push_back(i);
			if(has[l2/i])facs.push_back(l2/i);
		}
	}	
	if(i*i==l2&&has[i])facs.push_back(i);

	for(i=0;i<facs.size();i++){
		for(j=0;j<facs[i];j++)
		{
			for(k=0;k*(facs[i])+j<l1;k++)
			{
				if(a[k*(facs[i])+j]!=a[j])break;
			}
			if(k*(facs[i])+j<l1)break;
		}
		if(j==facs[i])
		{
			for(j=0;j<facs[i];j++)
		{
			c[j]=a[j];
		}
		c[j]='\0';
		//cout<<c<<endl;
		map1[c]++;
		}
	}
	for(i=0;i<facs.size();i++){
		for(j=0;j<facs[i];j++)
		{
			for(k=0;k*(facs[i])+j<l2;k++)
			{
				if(b[k*(facs[i])+j]!=b[j])break;
			}
			if(k*(facs[i])+j<l2)break;
		}
		if(j==facs[i])
		{
			for(j=0;j<facs[i];j++)
		{
			c[j]=b[j];
		}
		c[j]='\0';
		if(map1[c])csol++;
		}
	}
	cout<<csol<<endl;

}