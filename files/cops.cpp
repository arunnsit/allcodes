#include<stdio.h>
int main(){
	int t,m,x,y,k,o,i,c;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&m,&x,&y);
		int coun[105][2]={0};
		x=x*y;
		c=0;
		while(m--){
			scanf("%d",&k);
			coun[(k-x)>=1?k-x:1][0]++;
			coun[(k+x)<=100?k+x:100][1]++;
			//printf("+%d -%d\n",(k-x)>=1?k-x:1,(k+x)<=100?k+x:100);
		}
		int tmp=0;
		for(i=1;i<=100;i++){
			if(coun[i][0])tmp+=coun[i][0];
		    if(!tmp){c++;}
			if(coun[i][1])tmp-=coun[i][1];
		}
		printf("%d\n",c);



	}
}