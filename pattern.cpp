#include<stdio.h>
int main()
{int i=0,j=1,k=1,col,row=1,n;
scanf("%d",&n);
while(row<=n)
{i=0;j=1;k=1;
while(j<=n-row+1){printf("*");j++;}j=1;if(row==1){j++;}
while(k<=2*row-3){printf(" ");k++;}
while(j<=n-row+1){printf("*");j++;}
printf("\n");row++;
}row--;
while(row>0)
{i=0;j=1;k=1;
while(j<=n-row+1){printf("*");j++;}j=1;if(row==1){j++;}
while(k<=2*row-3){printf(" ");k++;}
while(j<=n-row+1){printf("*");j++;}
printf("\n");row--;
}


}
