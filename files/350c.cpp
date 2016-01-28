#include<stdio.h>
#include<algorithm>
struct node{
    int x;
    int y;
};
int cmp(node a,node b){
    return abs(a.x)+abs(a.y)<abs(b.x)+abs(b.y);
}
int main(){
    int n,x,y,k=0,i;node a[100009];
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d %d",&a[i].x,&a[i].y);if(a[i].x&&a[i].y)k+=6;else k+=4;}
    std::sort(a,a+n,cmp);
    printf("%d\n",k);
    for(i=0;i<n;i++){
x=a[i].x;y=a[i].y;
        if(x>=0&&y>=0){
                if(x)printf("1 %d R\n",x);
                if(y)printf("1 %d U\n",y);
                printf("2\n");
                if(x)printf("1 %d L\n",x);
                if(y)printf("1 %d D\n",y);
                printf("3\n");
        }
        if(x<0&&y>=0){
                if(x)printf("1 %d L\n",-1*x);
                if(y)printf("1 %d U\n",y);
                printf("2\n");
                if(x)printf("1 %d R\n",-1*x);
                if(y)printf("1 %d D\n",y);
                printf("3\n");
        }
        if(x<0&&y<0){
                if(x)printf("1 %d L\n",-1*x);
                if(y)printf("1 %d D\n",-1*y);
                printf("2\n");
               if(x) printf("1 %d R\n",-1*x);
                if(y)printf("1 %d U\n",-1*y);
                printf("3\n");
        }
        if(x>=0&&y<0){
                if(x)printf("1 %d R\n",x);
                if(y)printf("1 %d D\n",-1*y);
                printf("2\n");
                if(x)printf("1 %d L\n",x);
                if(y)printf("1 %d U\n",-1*y);
                printf("3\n");
        }

    }
}
