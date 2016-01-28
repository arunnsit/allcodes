#include<stdio.h>
int a[10001]={0};
int b[10006]={0};
int main()
{int t=0,i=1,j,x=1,y=1;j=3;b[2]=2;
scanf("%d",&t);
while((i<10001)){if(i%2==0){a[i]=a[i-1]+3;}
                            else{a[i]=a[i-1]+1;}
                            if(j%2==0){b[j]=b[j-1]+3;}
                            else{b[j]=b[j-1]+1;}
                            j++;i++;}


while(t)
{scanf("%d %d",&x,&y);
if(x==y){printf("%d\n",a[x]);}
else if(x==y+2){printf("%d\n",b[x]);}
else {printf("No Number\n");}
t--;
}return 0;
}
