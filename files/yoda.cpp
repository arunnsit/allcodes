#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
	int t,i,j,k,l;
    string a;
	while(getline(cin,a))
	{
		int freq[27]={0};
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]>=97&&a[i]<=123)freq[a[i]-97]++;
			if(a[i]>=65&&a[i]<=92)freq[a[i]-65]++;
		}
		
	}


}