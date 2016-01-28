#include<stdio.h>
#include<math.h>
int main(){
int t,k,p,i,j,o,r;char a[1000000],b[1000000];
scanf("%d",&t);
while(t)
{scanf("%d %s",&k,&a);
p=pow(2,k);
for(i=0;i<p;i++)
{o=0;
for(j=0;j<k;j++)
{r=(1&(i>>j));r=r<<(k-j-1);o=o^r;
}b[o]=a[i];


}b[p]='\0';
printf("%s\n",b);


t--;}
}
