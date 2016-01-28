#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<queue>
using namespace std;
queue<long long int> q[1000005],qp;
long long int a[1000005],b[1000005];
int main(){
	long long int n,i,k,j,l,p,prev=-1;
	long long int sol;
	scanf("%lld %lld",&n,&k);
	sol=(n*(n+1))/2;
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		if((a[i]-k)>=0)
		b[i]=a[i]-k;
	    else b[i]=a[i];
		q[a[i]].push(i);
		if(a[i]>k)qp.push(i);
}
for(i=0;i<n;i++){
    if(b[i]==0){
    int x;	

	while(!qp.empty()&&qp.front()<=i){
		qp.pop();
	}
	if(!qp.empty()){
		p=qp.front();
		sol=sol-(((i-prev-1)*(n-p-1))+i-prev-1+n-p);
		prev=i-1;
	}

}

    
	else if(b[i]>0){
		p=n+1;
		for(j=1;j*j<=b[i];j++){
			if(b[i]%j==0){
			while(j>k&&!q[j].empty()&&q[j].front()<=i){
				q[j].pop();
			}
			while(b[i]/j>k&&!q[b[i]/j].empty()&&q[b[i]/j].front()<=i){
				q[b[i]/j].pop();
			}
			//printf("%d %d %d %d\n",i,j,q[j].front(),q[b[i]/j].front());
			if(!q[b[i]/j].empty()&&b[i]/j>k)p=min(p,q[b[i]/j].front());
			if(!q[j].empty()&&j>k)p=min(p,q[j].front());
		}
		if(p!=n+1){
		sol=sol-(((i-prev-1)*(n-p-1))+i-prev-1+n-p);
		prev=i-1;
	}
	//printf("sol:%lld\n",sol);
}
}

}
printf("%lld\n",sol);
}