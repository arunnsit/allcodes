#include<stdio.h>
#include<string.h>
inline int check(int k[1000002],int b)
{int c,j=0;
for(c=0;c<b/2;c++)
{
 if(k[c]==k[b-c-1]){j++;}
}
if(j==b/2){return 2;}
else return -1;
}
char k[1000002];
int l[1000002]={0};
int main()
{int t,n,b,p,i=0,c,co=0,temp;
scanf("%d",&t);
while(t)
{scanf("%s",&k);co=0,p=0,temp=0;
b=strlen(k);
for(n=0;n<b;n++){l[n]=k[b-n-1]-'0';}
while(co!=2){l[0]++;i=0;if(l[i]>9){while(l[i]>9){l[i]=l[i]%10;i++;if(i==b+1){b++;}l[i]++;}}
co=check(l,b);
}
for(n=b-1;n>=0;n--){printf("%d",l[n]);}t--;printf("\n");
}
return 0;}

