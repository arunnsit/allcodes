#include<iostream>
using namespace std;
void addstrings(char a[100],char b[100])
{int i,j;
for(i=0;a[i]!='\0';i++);
for(j=0;b[j]!='\0';j++){a[i]=b[j];i++;}a[i]='\0';
cout<<a;
}
int main()
{char a[100],b[100];cin>>a>>b;
addstrings(a,b);

}
