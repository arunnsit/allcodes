#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int v;
	int i,j,k,a[12]={0},mi=1000000000,ml=0,tmp;
	cin>>v;

	for(i=0;i<9;i++)
		{
			cin>>a[i];
			mi=min(mi,a[i]);
		}
		ml=v/mi;
    if(ml==0)cout<<-1;
	for(i=1;i<=ml;i++)
	{   
		tmp=0;
		for(j=0;j<9;j++)
		{   
			if((v-a[j])/mi+i==ml&&v>=a[j])
			{
				tmp=j+1;
			}
		}
		cout<<tmp;
		
		//cout<<"ele:"<<a[tmp-1]<<endl;
		v-=a[tmp-1];
		//cout<<"v:"<<v<<endl;
	}
	cout<<endl;	



}