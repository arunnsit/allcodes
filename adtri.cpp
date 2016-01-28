#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

int vec[5000009]={0},v[5000009];

int main(){
	int i,j,k,t,n;
	for(i=2;i<2240;i++)
		if(v[i]==0)
		{
			for(j=2*i;j<5000002;j+=i)
				v[j]=1;
		}
for(i=5;i<=5000002;i+=4)
if(!v[i]){
	for(j=i;j<5000002;j+=i)vec[j]=1;
}		


scanf("%d",&t);
while(t--){
	scanf("%d",&n);
	if(vec[n])printf("YES\n");
	else printf("NO\n");
}


	}