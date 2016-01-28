#include<stdio.h>
#include<unordered_map>
int a[501*501],list[505];
#include<algorithm>
using namespace std;
int gcd(int x,int y){
	if(y==0)return x;
	else return gcd(y,x%y);
}
int main()
{
	int n,i,j,k,l,d=0,x;
	scanf("%d",&n);
	unordered_map<int ,int>map1;
	for(i=0;i<n*n;i++){
		scanf("%d",&a[i]);
		map1[a[i]]++;
	}
    if(n==1)printf("%d\n",a[0]);
    else{
    	sort(a,a+n*n);
    	list[d++]=a[n*n-1];
    	list[d++]=a[n*n-2];
    	map1[gcd(a[n*n-1],a[n*n-2])]-=2;
    	map1[a[n*n-1]]--;
    	map1[a[n*n-2]]--;
    	i=n*n-3;
    	while(i>=0){
    		x=map1[a[i]];
    		if(x>0){
    		for(j=0;j<d;j++){
    			map1[gcd(list[j],a[i])]-=2;
    		}
    		map1[a[i]]--;
    		list[d++]=a[i];	
    		}
    		else i--;
     	}
     	for(j=0;j<d;j++)printf("%d ",list[j]);
     		printf("\n");


    }
}