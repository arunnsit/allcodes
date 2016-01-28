#include<stdio.h>
#include<algorithm>
struct node {
	int val;
	int x;
	int y;
	int pos;
    int sol;
};
struct nody{
	int pos;
	int left;
	int right;
	
};
struct final{
	int equal;
	int less;
	int greater;
};

#define gc getchar_unlocked
inline void fastRead_int(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
 
inline void fastRead_string(char *str)
{
    register char c = 0;
    register int i = 0;
 
    while (c < 33)
        c = getchar_unlocked();
 
    while (c != ' '&&c!='\n') {
        str[i] = c;
        c = getchar_unlocked();
        i = i + 1;
    }
 
    str[i] = '\0';
}
 
using namespace std;
int a[1000009];
nody cp[1000009];
int binary(int x,int low,int high){
	int mid=(high+low)/2;
	 if(cp[mid].left<=x&&x<cp[mid].right)return cp[mid].pos;
	else if(cp[mid].left>x)return binary(x,low,mid-1);
	else return binary(x,mid+1,high);
}
 
node my[1000009],stack[1000009];
 
int main(){
	int n,m,i,j;
	fastRead_int(n);
	fastRead_int(m);
	for(i=1;i<=n;i++){
		fastRead_int(my[i].val);
		my[i].pos=i;
		a[i]=my[i].val;
	}
    int pos=1;
    stack[pos++]=my[1];
	for(i=2;i<=n;i++){
		while(stack[pos-1].val<=my[i].val&&pos!=1){
			my[stack[pos-1].pos].y=i-stack[pos-1].pos-1;
			pos--;
		}
		stack[pos++]=my[i];
	}
	while(pos!=1){
		my[stack[pos-1].pos].y=n-stack[pos-1].pos;
		pos--;
 
	}
    pos=1;
    stack[pos++]=my[n];
    for(i=n-1;i>0;i--){
    	while(stack[pos-1].val<my[i].val&&pos!=1){
			my[stack[pos-1].pos].x=stack[pos-1].pos-1-i;
			pos--;
		}
		stack[pos++]=my[i];
    }
    while(pos!=1){
		my[stack[pos-1].pos].x=stack[pos-1].pos-1;
		pos--;
	}
	int 
   
	for(i=1;i<=n;i++){
		my[i].sol=(my[i].x+my[i].y+my[i].x*my[i].y+1)&1;
		store(my[i].sol,my[i].val);
		//printf("a:%d equal:%d\n",my[i].val,result(equal,my[i].val));
	}
	sort(a+1,a+n+1);
	pos=0;
	a[0]=0;
	a[n+1]=1000000009;
	for(i=0;i<=n;i++){
		if(a[i]!=a[i+1]){
			cp[pos].pos=pos;
			cp[pos].left=a[i];
			cp[pos].right=a[i+1];
			pos++;
		}
	}
	 int s=0;
	for(i=0;i<=n;i++){
		if(a[i]!=a[i+1]){
			store(less,s,a[i+1]);
			//printf("a:%d equal:%d\n",a[i+1],result(less,a[i+1]));
			s=(s+result(equal,a[i+1]))&1;
		}
	}
	
	s=0;
	
	for(i=n+1;i>=1;i--){
		
		if(a[i]!=a[i-1]){
			store(greater,s,a[i-1]);
			//printf("a:%d equal:%d\n",a[i-1],result(greater,a[i-1]));
			s=(s+result(equal,a[i-1]))&1;
		}
	}
	char ch[2],cb[2];
	int stroke,rupa;
	for(i=1;i<=m;i++){
		fastRead_string(ch);
		fastRead_int(stroke);
		fastRead_string(cb);
		if(ch[0]=='='){
			if(result(equal,stroke)==1)printf("%c",cb[0]);
			else{
				if(cb[0]=='C')printf("D");
				else printf("C");
			}
		}
		else if(ch[0]=='>'){
					rupa=binary(stroke,1,pos-1);
					if(stroke==cp[rupa].left||stroke==cp[rupa].right){}
					else{
						stroke=cp[rupa].left;
					}
			if(result(greater,stroke)==1)printf("%c",cb[0]);
			else{
				if(cb[0]=='C')printf("D");
				else printf("C");
			}
		}
		else if(ch[0]=='<'){
			rupa=binary(stroke,1,pos-1);
					if(stroke==cp[rupa].left||stroke==cp[rupa].right){}
					else{
						stroke=cp[rupa].right;
					}
			if(result(less,stroke)==1)printf("%c",cb[0]);
			else{
				if(cb[0]=='C')printf("D");
				else printf("C");
			}
		}
		//printf("st:%d\n",stroke);
 
	}
	printf("\n");
} 