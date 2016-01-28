#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int b[100009],c[100009];
struct node{
int pos,val;
};
node a[100009];
bool cmp(node a,node b){return a.val<b.val;}
int main(){
	int n,m,k,i,o,x=0,y=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i].val;
		a[i].pos=i+1;
	}
	sort(a,a+n,cmp);
	long long int X=0,Y=0;
   int chip=0,v=0;
   for(i=n-1;i>=0;i--)
   {
   	if(!chip){
   		X+=a[i].val;
   		b[x++]=a[i].pos;
        
   	}
   	else{
   		Y+=a[i].val;
   		c[y++]=a[i].pos;

   	}
   	if(x==(n+1)/2){v=0;break;}
   	else if(y==(n+1)/2){v=1;break;}
   	if(X>Y){chip=1;}
   	else {chip=0;}
   }
   if(v){
   	for(i=i-1;i>=0;i--){
   		b[x++]=a[i].pos;
   	}
   }
   else {
   	for(i=i-1;i>=0;i--){
   		c[y++]=a[i].pos;
   	}

   }
   cout<<x<<endl;
   for(i=0;i<x;i++)cout<<b[i]<<" ";
   cout<<endl;
   cout<<y<<endl;
   for(i=0;i<y;i++)cout<<c[i]<<" ";	
   cout<<endl;	



}