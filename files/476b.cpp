#include<stdio.h>
char a[20],b[20];

float sol(int j,int p,int m,int x,int y){
	if(x==p&&m==y)return 1;
	if(x>p||y>m)return 0;
	float u;
	int i=j+1;
		if(b[i]=='+')u= sol(j+1,p,m,x+1,y);
		else if(b[i]=='-')u= sol(j+1,p,m,x,y+1);
		else u= 0.5*sol(j+1,p,m,x,y+1)+0.5*sol(j+1,p,m,x+1,y);
		return u;
}

int main(){
	scanf("%s %s",a,b);
	int i,p=0,m=0;
	for(i=0;a[i]!='\0';i++)if(a[i]=='+')p++;
		else m++;

    printf("%.9f\n",sol(-1,p,m,0,0));

}