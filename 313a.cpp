#include<stdio.h>
#include<algorithm>
int main(){
	int a,b,c,d,e,f,s=0,i,prev;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	prev=a;
	b=b>f?f:b;
	for(i=0;i<b;i++){
		s+=2*prev+1;
		prev++;
	}//printf("prev %d\n",prev);
    s+=abs(e-c)*2*prev;
    prev=d;
    c=c>e?e:c;
    for(i=0;i<c;i++){
		s+=2*prev+1;
		prev++;
	}
	printf("%d\n",s);

}