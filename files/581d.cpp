#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
	int a[3][2],i,j,k,l,m,n,s=0,side,x,y;
	for(i=0;i<3;i++){cin>>x>>y;
		a[i][0]=min(x,y);
		a[i][1]=max(x,y);
	}

    for(i=0;i<3;i++)s+=a[i][0]*a[i][1];
    side=sqrt(s);
    if(side*side==s){
    	if(a[0][0]+a[1][0]+a[2][0]==a[0][1]&&a[0][1]==a[1][1]&&a[1][1]==a[2][1]&&a[1][1]==side){
            for(j=0;j<a[0][0];j++){
    		for(i=0;i<a[0][1];i++)cout<<"A";
    		cout<<endl;	}
            for(j=0;j<a[1][0];j++){
    		for(i=0;i<a[1][1];i++)cout<<"B";
    		cout<<endl;}
    		for(j=0;j<a[2][0];j++){
    		for(i=0;i<a[2][1];i++)cout<<"C";
    		cout<<endl;	}

    	}
    	else{
    		if(a[0][0]*a[0][1]>a[])






    	}



    }
    else printf("-1\n");

}