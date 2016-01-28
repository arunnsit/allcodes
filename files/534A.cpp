#include<stdio.h>
#include<algorithm>
int main(){
    int n,i;int a[6000]={0};
    scanf("%d",&n);
    if(n==2){
        printf("%d\n1\n",n-1);
    }
    else if(n==3){
        printf("%d\n1 3\n",n-1);
    }
    else if(n==4){
        printf("%d\n1 3 \n",n-2);
    }

    else{
        printf("%d\n",n);int prev =-1,y=n;
        while(y>0){
            for(i=1;i<=n;i++){
                if(abs(i-prev)!=1&&a[i]!=1){
                    prev=i;
                    a[i]=1;
                    printf("%d ",i);
                    y--;
                }
            }

        }printf("\n");
    }

}
