#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{int t,n,a[1001],b[1001],f,co;
scanf("%d",&t);
while(t)
{co=0;
scanf("%d",&n);
for(f=0;f<n;f++){scanf("%d",&a[f]);}
sort(a,a+n);
for(f=0;f<n;f++){scanf("%d",&b[f]);}
sort(b,b+n);
for(f=0;f<n;f++){co=co+a[f]*b[f];}
printf("%d\n",co);
    t--;
}

}
