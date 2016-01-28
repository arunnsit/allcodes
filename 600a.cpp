#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string a,b,in;
	int i,j,k,l,m,n,o;
	cin>>in;
	l=in.length();
	int lp=0,x=0,y=0;
	for(i=0;i<l;i++)
	{
		if(in[i]==','||in[i]==';'){
			int check=0;
			for(j=lp;j<i;j++){
				if(in[j]>='0'&&in[j]<='9'){}
					else check=1;
			}
			if(in[lp]=='0')check=1;
			if(check==0){
				for(j=lp;j<i;j++)a[x++]=in[j],cout<<a[x-1];
				a[x++]=',';	
			}
			else{
				for(j=lp;j<i;j++)b[y++]=in[j],cout<<b[y-1];
				b[y++]=';';	

			}
			lp=i+1;


		}
	}
	int check=0;
			for(j=lp;j<i;j++){
				if(in[j]>='0'&&in[j]<='9'){}
					else check=1;
			}
			if(in[lp]=='0')check=1;
			if(check==0){
				for(j=lp;j<i;j++)a[x++]=in[j];
				a[x++]=',';	
			}
			else{
				for(j=lp;j<i;j++)b[y++]=in[j];
				b[y++]=';';	
			}
			lp=i+1;
a[x]='\0';
b[y]='\0';
cout<<a<<endl<<b<<endl;
}