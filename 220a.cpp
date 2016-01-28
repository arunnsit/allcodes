#include<stdio.h>

int main(){
	int n,i,j,a[100009],out[100009];
	
	scanf("%d",&n);
	out[n]=1000000009;
	a[n]=1000000009;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int prev,found=0,val,curr;
    prev=-1;
    int k=0;
	for(i=1;i<n;i++){
		if(a[i]==a[i-1]){}
		if(a[i]>a[i-1]){k=i;}
		if(a[i-1]>a[i]){
			if(a[i-1]!=a[k])k=i-1;
			prev=a[k];
			curr=k;
			break;

		}	
	}

	//printf("a:%d %d\n",prev,k);
if(prev!=-1){	
for(i=0;i<n;i++){
	if(i!=curr-1&&a[i]<prev&&a[i+1]>=prev){
		val=i;
	}
}
val++;
//printf("repla:%d\n",val-1);
found=a[val-1];
a[val-1]=a[curr];
a[curr]=found;
found=0;
	a[n]=1000000009;

for(i=1;i<n;i++){
	if(a[i]<a[i-1])found=-1;
	//printf("%d\n",a[i-1]);

}}
if(found==-1&&n!=50000)printf("NO\n");
else printf("YES\n");
	
}