#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	char a[1002];
	long long int p,q,r,m,n,o,c,e=0,f=0,g=0,i,c1,hams=100000000000009;
	scanf("%s %I64d %I64d %I64d %I64d %I64d %I64d %I64d",a,&p,&q,&r,&m,&n,&o,&c);
    for(i=0;a[i]!='\0';i++){
    	if(a[i]=='B')e++;
    	else if(a[i]=='S')f++;
    	else g++;
    }
if(e){hams=min(hams,p/e);}
if(f){hams=min(hams,q/f);}
if(g){hams=min(hams,r/g);}
if(e){p-=e*hams;}
else p=0;
if(f){q-=f*hams;}
else q=0;
if(g){r-=g*hams;}
else r=0;
    while(1){
    	c1=0;
    	if(e){
    		if(p>=e){
    			p-=e;
    		}
    		else{
    			c1+=m*(e-p);
    			p=0;
    		}
    	}
    	if(f){
    		if(q>=f){
    			q-=f;
    		}
    		else{
    			c1+=n*(f-q);
    			q=0;
    		}
    	}
    	if(g){
    		if(r>=g){
    			r-=g;
    		}
    		else{
    			c1+=o*(g-r);
    			r=0;
    		}
    	}
    	if(c1>c)break;
    	else{
    		c-=c1;
    		hams++;
    	}
    	if(p==0&&q==0&&r==0)break;
    }
    c1=e*m+f*n+g*o;
    hams+=c/c1;
    printf("%I64d\n",hams);

}