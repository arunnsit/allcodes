#include<stdio.h>
int main(){
	double t,q,s;
	int c=0,i;
	scanf("%lf %lf %lf",&t,&s,&q);
    while(s<t){
    	s+=(s*(q-1))/q;
    	c++;
    }
    printf("%d\n",c);

}