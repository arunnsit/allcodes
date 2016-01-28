#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> prime[1000009];
int main(){
	int i ,j ,k,t,n,m;
	for(i=2;i<=1000002;i++){
		if(prime[i].size()==0)
		for(j=i;j<1000002;j+=i){
			prime[j].push_back(i);
		}
	}
scanf("%d",&t);
while(t--){
scanf("%d",&n);
	int a[1000009]={0},b[1000009]={0};
	i=1;j=1;
	int l=0,c=0,x=0,p,q;	
	while(i<=n&&j<=n){
		scanf("%d",&a[j]);
		for(p=0;p<prime[a[j]].size();p++){
			if(b[prime[a[j]][p]]>x)x=b[prime[a[j]][p]];
			b[prime[a[j]][p]]=j;
		}
		i=x+1>i?x+1:i;
		//cout<<"i:"<<i<<" j:"<<j<<endl;
		l=l>(j-i+1)?l:j-i+1;
				j++;
	}
	if(l>=2)
	printf("%d\n",l);
	else printf("-1\n");	
}
}