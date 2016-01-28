#include<iostream>
using namespace std;
int main()
{
	char a;
	int x=0,y=0;
	while( a != '$')
	{
		cin>>a;
		if(a=='N')
		x++;
		if(a=='S')
		x--;
		if(a=='E')
		y--;
		if(a=='W')
	    y++;
	}
	if(y<0)
	{
		while(y)
		{cout<<'E';y++;}
	}
	if(x>0)
	{
		while(x)
		{
			cout<<'N';x--;
		}
	}
	if(x<0)
	{
		while(x)
		{cout<<'S';y++;}
	}
	if(y>0)
	{
		while(y)
		{cout<<'W';y--;}
	}
	return 0;
	
}
