#include<stdio.h>
int a[1009][1009]={0},b[10009][10009][2]={0},c[100009][2]={0};
int main(){
    int h,w,k,i,j,l,p,x,o,y,m,r,u,g,t,top,left,right,down,cwidth=0,cheight=0,ch=0,cw=0,cf=0;
    scanf("%d %d %d",&h,&w,&o);m=0;
    for(i=1;i<=o;i++){
        scanf("%d",&p);u=1;
        top=100000,left=100000,right=0,down=0;
        for(j=1;j<=p;j++){
            scanf("%d %d",&x,&y);
            b[i][j][0]=x;b[i][j][1]=y;
            if(y<left){left=y;}
            if(y>right){right=y;}
            if(x<top){top=x;}
            if(x>down){down=x;}
    }
   // printf("%d: %d %d %d %d\n",i,top,left,right,down);
    if(h-cf<down-top+1){
        cf=0;
        cw+=cwidth;
        ch=cw;
        cwidth=0;
    }
    if(w-cw>=right-left+1&&h-cf>=down-top+1){

        for(j=1;j<=p;j++){
            a[b[i][j][0]-top+1+cf][b[i][j][1]-left+1+ch]=i;
        }
        cf+=down-top+1;
            cwidth=(cwidth>right)?cwidth:right;
    }
   // printf("cf:%d cheight:%d cw:%d\n",cf,cheight,cw);
    }
    for(k=1;k<=h;k++){

            for(l=1;l<=w;l++){
                printf("%d ",a[k][l]);}printf("\n");}

}
