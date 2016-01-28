#include<iostream>
#include<string.h>
using namespace std;
int main()
{int i,j,l,p,h;char t[100],s[100];cin>>t>>s;
l=strlen(t);p=strlen(s);
for(i=0;i<p;i++){h=0;while(t[h]==s[i]&&t[h]!='\0'){i++;h++;if(t[h]!=s[i]){i--;}}if(h==l){cout<<i;j=0;}}
if(j){cout<<"not found";}

}
