#include<stdio.h>
int stp[100005][2]={0},sol=100000000,nc;
int justdoit(int n,int step,int visit[100008],int ma,int i){
	printf("n:%d %d %d\n",n,stp[n][1]);
	if(n<=0||n>ma+1||visit[n]||stp[n][1]!=i)return 0;
	visit[n]=1;
	stp[n][0]+=step;
	stp[n][1]++;
	if(i==nc-1)printf("c:%d\n",stp[n][1]);
	if(i==nc-1&&stp[n][1]==nc&&sol>stp[n][0])sol=stp[n][0];
	justdoit(n/2,step+1,visit,ma,i);
	justdoit(2*n,step+1,visit,ma,i);
	return 0;
}
int a[100005]={0};
int main(){
	int n,i,j,temp,ma=0;
	scanf("%d",&n);
	nc=n;
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
    	ma=ma>=a[i]?ma:a[i];
    }
    i=0;	
	while(i<n){
		int visit[100008]={0};
		justdoit(a[i],0,visit,ma,i);i++;
	}
	printf("%d\n",sol);
}