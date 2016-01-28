#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[1002]={0},in[1002],bp,u[1002]={0},pos=1,n,i,j,b,c=0;
	cin>>n>>b;
	bp=b;
	for(i=1;i<n;i++){
		cin>>in[i];
        if(a[in[i]]==0){
        	u[pos++]=in[i];
        }
		a[in[i]]++;
	}
	sort(u+1,u+pos);
	i=pos;
	while(i>=1){
		int x=0,o=0;
		x=(u[i]-u[i-1])*a[u[i]];
		if(b+x>u[i-1]){
			//cout<<"fdf";
            o=u[i];
			while(b<=u[i]){
				int k=0;
				while(k<a[o]){
				b++;
				if(b>u[i])break;
				k++;
			}
				u[i]--;
			}
		}
		else{
		    o=u[i];
			a[u[i-1]]+=a[o];
			b+=x;
		}
			//cout<<b<<endl;
        if(b>u[i-1])break;
		i--;	
	}
	cout<<b-bp<<endl;
}
