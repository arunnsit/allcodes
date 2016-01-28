#include<stdio.h>
#include<algorithm>
#include<string.h>
int mb[2][2002]={0};
int mblast(char a[2002],char b[2002],int m ,int n,int k)
{int i,j,p,u;
 for(i=0;i<=m;i++)
for(j=0;j<=n;j++)
{if(i==0||j==0){u=std::max(i,j);mb[i%2][j]=u*k;}

    if(i>0&&j>0){p=a[i-1]-b[j-1];if(p<0){p=-p;}

mb[i%2][j]=std::min(p+mb[(i-1)%2][j-1],k+std::min(mb[(i-1)%2][j],mb[i%2][j-1]));}

}
return mb[m%2][n];
}





int main()
{char a[2002],b[2002];int i,j,k,o;
scanf("%s %s %d",&a,&b,&k);
o=mblast(a,b,strlen(a),strlen(b),k);
printf("%d\n",o);


}
