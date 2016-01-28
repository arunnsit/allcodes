#include<stdio.h>
#include<unordered_map>
using namespace std;
int a[1000009],b[1000009],c[1000009],temp[1000009];
void merge(int a[1000009],int x,int y,int z)
{int pos=0,i=x,j=y+1;
	while(i<=y&&j<=z){
		if(a[i]>a[j]){
			temp[pos++]=a[j++];
		}
		else {
			temp[pos++]=a[i++];
		}
	}
	if(i<=y)
		while(i<=y)temp[pos++]=a[i++];
	if(j<=z)
		while(j<=z)temp[pos++]=a[j++];
	for(i=0;i<pos;i++){
		a[i+x]=temp[i];
	}

}
long long int sol(int x,int y,int z){
	int i,j=y+1;
	long long int s=0;
	for(i=x;i<=y;i++){
			while(j<=z&&a[i]>b[j])j++;
			s+=j-x;
		}
	}
	return s;
}
int main(){
	int n,i,j,k;
	long long int s=0;
	unordered_map<int ,int >map1;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		b[i]=++map1[a[i]];
	}
	unordered_map<int ,int >map2;	
    for(i=n-1;i>=0;i--){
		c[n-1-i]=++map2[a[i]];
	}
	for(i=2;i<n;i*=2)
	{
		s+=sol(0,i/2-1,i-1);
		merge(a,0,i/2-1,i-1);
		for(j=i;j<n;j+=i)
		{
			merge(a,j,(j+i)/2-1,j+i-1>=n?j+i-1:n-1);
            merge(b,j,(j+i)/2-1,j+i-1>=n?j+i-1:n-1);
		}

	}
	s+=sol(0,i/2-1,i-1>=n?i-1:n-1);
	printf("%lld\n",s);


}