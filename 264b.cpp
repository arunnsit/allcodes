#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>facs[100009];
int len[100009]={0};
int facl[100009]={0};
int main()
{int i,j,k,n,tmp,s=0;
	for(i=2;i<100009;i++)
		for(j=i;j<100009;j+=i)
			facs[j].push_back(i);
		scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&tmp);
	for(j=0;j<facs[tmp].size();j++){
		len[tmp]=max(facl[facs[tmp][j]]+1,len[tmp]);
	}
	for(j=0;j<facs[tmp].size();j++){
		facl[facs[tmp][j]]=max(facl[facs[tmp][j]],len[tmp]);
	}
	s=max(s,len[tmp]);
}
if(n==1&&tmp==1)printf("1\n");
else printf("%d\n",s);


}