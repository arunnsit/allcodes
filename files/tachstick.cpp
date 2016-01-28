#include<stdio.h>
#include<algorithm>
int a[100003];
int main()
{int n,d,i,j,c=0;scanf("%d %d",&n,&d);
for(i=0;i<n;i++)scanf("%d",&a[i]);
std::sort(a,a+n);
for(i=0;i<n-1;i++){if(a[i+1]-a[i]<=d){c++;i++;}
}
printf("%d\n",c);

}
