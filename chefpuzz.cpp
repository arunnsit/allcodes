#include<stdio.h>
int a[1009][1009]={0},b[100009][2]={0},c[100009][2]={0};
int main(){
    int h,w,k,i,j,l,p,x,o,y,m,r,u,g,t,top,left,right,down,cwidth=0,cheight=0,ch=0,cw=0,cf=0;
    scanf("%d %d %d",&h,&w,&o);m=0;
    for(i=1;i<=o;i++){
        scanf("%d",&p);u=1;
        top=100000,left=100000,right=0,down=0;
        for(j=1;j<=p;j++){
            scanf("%d %d",&x,&y);
            b[j][0]=x;b[j][1]=y;
            if(y<left){left=y;}
            if(y>right){right=y;}
            if(x<top){top=x;}
            if(x>down){down=x;}
    }
   // printf("%d: %d %d %d %d\n",i,top,left,right,down);
    if(w-cw<right-left+1){
        cw=0;
        cf+=cheight;
        ch=cf;
        cheight=0;
    }
    if(w-cw>=right-left+1&&h-cf>=down-top+1){

        for(j=1;j<=p;j++){
            a[b[j][0]-top+1+ch][b[j][1]-left+1+cw]=i;
        }
        cw+=right-left+1;
            cheight=(cheight>down)?cheight:down;
    }
    printf("cf:%d cheight:%d cw:%d\n",cf,cheight,cw);
    }
    for(k=1;k<=h;k++){

            for(l=1;l<=w;l++){
                printf("%d ",a[k][l]);}printf("\n");}

}
