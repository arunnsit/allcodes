#include<stdio.h>
int main(){
	char a[12];
	 int n,ma,m[1003]={0},pos=-1,i,j,prev=-1,l=0,r=0,cp=0,ct=0;
	scanf("%s %d",a,&ma);
	int d=0;
	for(j=0;j<10;j++)if(a[j]=='1')cp++;
    for(j=0;j<10;j++)if(a[j]=='1'){
    	ct++;
    	if(ct==cp-2){pos=j;break;}


    }
    printf("%d",pos);
	for(i=0;i<ma;i++){
		d=0;
		for(j=0;j<10;j++){
			if(j>pos){
			if(i%2==0&&a[j]=='1'&&l+(j+1)>r&&prev!=j){
				m[i+1]=j+1;
				prev=j;
				d=1;
				l+=j+1;
				break;
			}
			if(i%2==1&&a[j]=='1'&&r+(j+1)>l&&prev!=j){
				m[i+1]=j+1;
				prev=j;
				r+=j+1;
				d=1;break;}
			}
		}
		if(d==0||m[i]==m[i+1])break;
	}
	printf("\n%d %d %d\n",d,m[i],m[i+1]);
	if(d==0||m[i]==m[i+1])printf("NO\n");
	else {
		printf("YES\n");
		for(i=0;i<ma;i++)printf("%d ",m[i+1]);
		printf("\n");	

	}

}