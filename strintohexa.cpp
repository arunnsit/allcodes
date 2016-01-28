#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
void htoi(char a[1000],int l)
{int i,j=0;long long int b=0;
for(i=l-1;i>=0;i--){b=b+(a[i]-48)*pow(16,l-i-1);}
cout<<b;
}
int main()
{int l;char a[1000];cin>>a;l=strlen(a);
    htoi(a,l);
}
