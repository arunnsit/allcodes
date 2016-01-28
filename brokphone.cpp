#include<stdio.h>
int main(){
    int n,t,i,temp,mark,sum,prev;
    scanf("%d",&t);
    while(t--){scanf("%d %d",&n,&prev);mark=0;sum=0;n--;
        while(n--){
            scanf("%d",&temp);
            if(mark&&temp!=prev){sum+=1;mark=1;}
            else if(!mark&&temp!=prev){sum+=2;mark=1;}
            else mark=0;
            prev=temp;
        }
        printf("%d\n",sum);
    }
}
