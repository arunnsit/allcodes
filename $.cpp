#include<iostream>
using namespace std;
int main(){
	char a;
	int i=0,t=0,s=0;
	while(a!='$')
	{a=cin.get();
	if(a>=48&& a<=57)
	t++;
	if(a>=65&&a<=124)
	i++;
	if(a>=9&&a<=32)
	s++;
	}
	cout<<"characters: "<<i<<endl<<"integers: "<<t<<endl<<"whitespaces: "<<s;
	return 0;
}
