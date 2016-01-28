#include<stdio.h>
int main(){
	int a[100005],b[100005][2]={0},n,q,i;
	scanf("%d %d",&n,&q);
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
    }
    b[0][0]=1;
    int x=1;
    for(i=1;i<n;i++){
    	if(a[i-1]>a[i]){
    		b[i-1][1]=1;
    		x++;
    	}
    	b[i][0]=x;
    }
    


}