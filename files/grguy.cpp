#include<stdio.h>
#include<string.h>
char b[1000009],c[1000009];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%s",b);
		scanf("%s",c);
		int i=0,sol=0;;
		for(i=0;b[i]!='\0';i++)if(b[i]==c[i]&&b[i]=='#')break;
		if(c[i]=='#')printf("No\n");
	    else{
	    	i=0;
	    	int row=0;
	    	while(b[i]!='\0')
	    	{
	    		if(b[i]=='#')
	    		{
	    			row=0;
	    			break;

	    		}
	    		if(c[i]=='#')
	    		{
	    			row=1;
	    			break;

	    		}
	    		i++;
	    	}
	    		int r=(row+1)%2;
	    		for(i=0;b[i]!='\0';i++)
	    		{
	    			if(r==1)
	    			{
	    				if(c[i+1]=='#'){
	    					sol++;
	    					r=(r+1)%2;
	    				}

	    			}
	    			if(r==0)
	    			{
	    				if(b[i+1]=='#'){
	    					sol++;
	    					r=(r+1)%2;
	    				}

	    			}
	    		}	
	    		
	    		printf("Yes\n%d\n",sol);

	    	
	    }
	}
	}
