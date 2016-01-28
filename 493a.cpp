#include<stdio.h>
int main(){
	int t; 
	char a[30],b[30],team[100][3],crd[100][3];
	int tim[100],num[100],i,j,k,ppo[100]={0},h1[1000]={0},h2[1000]={0};
	
	scanf("%s %s",a,b);
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %s %d %s",&tim[i],team[i],&num[i],crd[i]);
		if(crd[i][0]=='r')ppo[i]=1;}
    for(i=0;i<t;i++){
    	if(ppo[i]!=0){
    		if(team[i][0]=='a'&&h2[num[i]]==0){
    			printf("%s ",b);
    			h2[num[i]]++;
    			printf("%d %d\n",num[i],tim[i]);
    		}
    		else if(team[i][0]=='h'&&h1[num[i]]==0) {
    			printf("%s ",a);
    			h1[num[i]]++;
    			printf("%d %d\n",num[i],tim[i]);
    		}

    		
    	}
    	else 
    	for(j=i+1;j<t;j++)
    	{
    		if(num[i]==num[j]&&team[i][0]==team[j][0]&&crd[j][0]=='y'){
    			ppo[j]=1;
    			break;
    		}

    	}

    }	

}