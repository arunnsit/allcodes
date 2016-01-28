#include<stdio.h>
#include<algorithm>
int main(){
int t;
scanf("%d",&t);
while(t--){
    double u,o,x,y,X,Y,d;
    scanf("%lf %lf %lf %lf",&X,&Y,&x,&y);
    o=X*Y;
    if(Y-x>=X){
            o=o-(Y-x)*(Y-x)/2+(Y-x-X)*(Y-X-x)/2;
            }
    else if(Y-x>=0&&Y-x<=X){
        o=o-(Y-x)*(Y-x)/2;
    }
    if(X-y>=Y){

            o=o-(X-y)*(X-y)/2+(X-y-Y)*(X-Y-y)/2;
            }
    else if(X-y>=0&&X-y<=Y){
        o=o-(X-y)*(X-y)/2;
    }
    d=(X*Y);
    u=(double)o/d;
   printf("%.6f\n",u);
}
}
