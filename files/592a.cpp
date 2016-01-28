#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,tmp,i,j,k,c=100,check=1;
	char b[10][10];
	for(i=0;i<8;i++)cin>>b[i];
	for(i=0;i<8;i++)
	for(j=0;j<8;j++)
		{
			tmp=100;
			if(b[i][j]=='W')
			for(k=i-1,tmp=0;k>=0;k--)
			{
				if(b[k][j]=='B')
					{
						tmp=100;
						break;
					}
				else{
					tmp++;
				}	
			}
			if(tmp<=c){
				c=tmp;
				check=1;
			}
			tmp=100;
			if(b[i][j]=='B')
			for(k=i+1,tmp=0;k<8;k++)
			{
				if(b[k][j]=='W')
					{
						tmp=100;
						break;
					}
				else{
					tmp++;
				}	
			}
			if(tmp<c){
				c=tmp;
				check=2;
			}
	}
if(check==1)cout<<"A\n";
else cout<<"B\n";

}