#include<iostream>
using namespace std;
void squeeze(char a[100])
{int i,j;
for(i=0;a[i]!='0';i++){if(a[i]==' '){for(j=i+1;a[j]!='0';j++){a[j-1]=a[j];}}}
    cout<<a;
}
int main(){char a[100];cin.getline(a,100);squeeze(a);
}
