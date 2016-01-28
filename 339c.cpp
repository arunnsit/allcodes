#include<stdio.h>
int main(){
   char w[13];int m,j,a[100009]={0},top,y;
    scanf("%s",&w);
    scanf("%d",&m);y=m;
        for(j=0;j<10;j++)
{int t,l=0,r=0,c=0,i,prev=-1;top=0;m=y;
       while(1){int p=0;
        for(i=(c==0)?j:0;i<10;i++){
            if(w[i]-'0'){

            if(c%2==0&&l+i+1>r&&i!=prev){
                    a[top]=i+1;p++;
                    l+=i+1;
                    top++;
                    m--;
                    c++;
                    prev=i;
                    break;
            }
            if(c%2!=0&&l<i+1+r&&i!=prev){
                    a[top]=i+1;p++;
                    r+=i+1;
                    top++;
                    m--;
                    c++;
                    prev=i;
                    break;
            }

    }      }  if(m==0||p==0){break;}}if(m==0)break;}
    if(m)printf("NO\n");
    else{
            printf("YES\n");
        for(int i=0;i<top;i++)printf("%d ",a[i]);printf("\n");
    }}
