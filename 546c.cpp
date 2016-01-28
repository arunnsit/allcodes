#include<stdio.h>
#include<queue>
using namespace std;
int main(){
	int a[20],b[20],c[20],d[20],n,k1,k2,i,j,m,k=0,x,y;
	queue<int> q1,q2;
	scanf("%d",&n);
	scanf("%d",&k1);
	for(i=0;i<k1;i++){
		scanf("%d",&a[i]);
		q1.push(a[i]);
	}

	scanf("%d",&k2);
	for(i=0;i<k2;i++){
		scanf("%d",&b[i]);
	q2.push(b[i]);
	}
	int fight=0,win=0,imp=0;
	while(1){
		x=q1.front();
		q1.pop();
		y=q2.front();
		q2.pop();
		//printf("cmp %d %d\n",x,y);
		fight++;
		if(x>y){
			q1.push(y);
			q1.push(x);}
		else{
			q2.push(x);
			q2.push(y);
		}
		if(q1.empty()){
			win=2;
			break;
		}
		if(q2.empty()){
			win=1;
			break;
		}
		k=0;
		m=0;
		while(!q1.empty()){
			c[k++]=q1.front();
			q1.pop();
		}
		while(!q2.empty()){
			d[m++]=q2.front();
			q2.pop();
		}
		for(i=0;i<k;i++)if(c[i]!=a[i])break;
		for(j=0;j<m;j++)if(d[j]!=b[j])break;
		if((i==k&&j==m)||fight>108){
			imp=1;
			break;
		}
		for(i=0;i<k;i++){
			q1.push(c[i]);
		}
		for(j=0;j<m;j++)q2.push(d[j]);
	}		
	if(imp)printf("-1\n");
	else printf("%d %d\n",fight,win);	


}