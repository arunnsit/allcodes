#include<stdio.h>
#include<algorithm>
using namespace std;
int a[1000009],orig[1000009];
struct node {
	int val;
	int x;
	int y;
	int pos;
    int sol;
};
struct sol{
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
sol e[1000009];
node my[1000009],stack[1000009],cp[1000009];
int binary(int low,int high,int x)
{   	//printf("%d %d %d\n",low,high,x);
	if(low>=high&&orig[low]!=x)return -1;
	if(low==high&&orig[low]==x)return low;

	int mid=(high+low)/2;
	if(x==orig[mid])return mid;
	else if(x<orig[mid])return binary(low,mid-1,x);
	else if(x>orig[mid])return binary(mid+1,high,x);
}
int bin(int x,int low,int high){
	//printf("%d %d\n",low,high);
		int mid=(high+low)/2;
	      if(low>=high)return high;
	 if(cp[mid].x<=x&&x<cp[mid].y)return cp[mid].pos;
	else if(cp[mid].x>x)return bin(x,low,mid-1);
	else return bin(x,mid+1,high);
}


int main(){
	int n,m,i,j;
	fastRead_int(n);
	fastRead_int(m);
	e[0].equal=0;
	e[0].less=0;
	e[0].greater=0;
	for(i=1;i<=n;i++){
		scanf("%d",&my[i].val);
		my[i].pos=i;
		e[i].equal=0;
		e[i].less=0;
		e[i].greater=0;
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
	sort(a+1,a+n+1);
	pos=0;
	a[n+1]=1000000009;
	for(i=0;i<=n;i++){
		if(a[i]!=a[i+1]){
			cp[pos].pos=pos;
			cp[pos].x=a[i];
			cp[pos].y=a[i+1];
			orig[pos++]=a[i];
		}
	}
	orig[pos]=1000000009;
    int rem;
    for(i=1;i<=n;i++){
    	my[i].sol=(my[i].x+my[i].y+my[i].x*my[i].y+1)&1;
    	rem=binary(1,pos-1,my[i].val);
    	e[rem].equal=(e[rem].equal+my[i].sol)&1;
    }
    for(i=0;i<=n;i++){
    	e[i+1].less=(e[i].less+e[i].equal)&1;
    }
    for(i=n;i>=0;i--){
    	e[i].greater=(e[i+1].greater+e[i+1].equal)&1;
    }
    char ch[2],cb[2];
	int stroke,rupa;
	for(i=1;i<=m;i++){fastRead_string(ch);
		fastRead_int(stroke);
		fastRead_string(cb);
        
		if(ch[0]=='='){
			rupa=binary(0,pos,stroke);
			if(rupa!=-1&&e[rupa].equal==1)printf("%c",cb[0]);
			else{
				if(cb[0]=='C')printf("D");
				else printf("C");
			}
		}
		else if(ch[0]=='>'){
					rupa=bin(stroke,0,pos-1);
					
			if(e[rupa].greater==1)printf("%c",cb[0]);
			else{
				if(cb[0]=='C')printf("D");
				else printf("C");
			}
		}
		else if(ch[0]=='<'){

			rupa=bin(stroke,0,pos-1);
					if(stroke==cp[rupa].x||stroke==cp[rupa].y){}
					else{
						rupa++;
					}
			if(e[rupa].less==1)printf("%c",cb[0]);
			else{
				if(cb[0]=='C')printf("D");
				else printf("C");
			}
		}
		//printf("st:%d\n",stroke);
 
	}
	printf("\n");






}
