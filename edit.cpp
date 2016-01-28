#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{   char a[1003];
	while(scanf("%s",a)>0)
	{
		int x=0,y=0;
		int i,j,k,l;
        l=strlen(a);
		for(i=0;i<l;i++)
		{
			if((i&1)==0&&islower(a[i])){
				x++;
			}
			else if((i&1)!=0&&isupper(a[i])){
				x++;
			}
			if((i&1)==0&&isupper(a[i])){
				y++;
			}
			else if((i&1)!=0&&islower(a[i])){
				y++;
			}

		}
		cout<<((x>y)?y:x)<<endl;

	}
}