#include<iostream>
using namespace std;
char a[100009];
int main()
{
	cin>>a;
	long long int odd=0,even=0,bato=0,bate=0,aato=0,aate=0,i,c=0;
    for(i=0;a[i]!='\0';i++)
    {
    	if(a[i]=='b'){
    		
    		if(i%2==0){
    			
    			odd+=bate;
    		    even+=bato;
    		    bate++;

    		}
    		else {
    			odd+=bato;
    		    even+=bate;
    			bato++;
    		}
    	}
    	if(a[i]=='a'){
    			if(i%2==0){
    			
    			odd+=aate;
    		    even+=aato;
    		    aate++;

    		}
    		else {
    			odd+=aato;
    		    even+=aate;
    			aato++;
    		}
    	}
    	c++;
    }
	cout<<even<<" "<<odd+c<<endl;
}