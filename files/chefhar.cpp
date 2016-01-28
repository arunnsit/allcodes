#include<stdio.h>
int a[100009][2];
int main(){
	int t,l,r,i,j,k;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&l,&r);
        int f=0,n,s=0,lf=0,lr=0,con=0;
		for(i=l;i<=r;i++){
			j=0;
			n=i;
			f=0;
			while(n){
				j++;
				n/=2;
			}
		for(k=0;k<j;k++){
			if((1&(i>>k))==0)f=1;
		}
		if(f==0)s+=j;
        if(f==1){
        	int c=0,d=0;

        	for(k=0;k<j;k++){
        		if((1&(i>>k))==0)break;
        		c++;
        	}
        	for(k=j-1;k>=0;k--){
        		if((1&(i>>k))==0)break;
        		d++;
        	}
        	a[con][0]=c;
        	a[con++][1]=d;     
        }
      //  printf("i:%d j:%d lf:%d lr:%d s:%d %d\n",i,j,lf,lr,s,lf+lr+s);

		}
		n=0;
		int v=0,x=0,y=0,m;
		{for(i=0;i<con;i++){
			if(lf<a[i][0]){lf=a[i][0];x=a[i][1];v=i;}
			else if(lf==a[i][0]&&x>a[i][1]){v=i;x=a[i][1];}
		}
		for(i=0;i<con;i++){
			if(i!=v){y=y>a[i][1]?y:a[i][1];}
		}
		n=y+lf;
}
v=0,x=0,y=0,m=0;
{for(i=0;i<con;i++){
			if(lf<a[i][1]){lf=a[i][1];x=a[i][0];v=i;}
			else if(lf==a[i][1]&&x>a[i][0]){v=i;x=a[i][0];}
		}
		for(i=0;i<con;i++){
			if(i!=v){y=y>a[i][0]?y:a[i][0];}
		}
		m=y+lf;
}


		printf("%d\n",(m>n?m:n)+s);


	}
}