
#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h;
    scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
    while(a!=-1||b!=-1||c!=-1||d!=-1||e!=-1||f!=-1||g!=-1||h!=-1){
       float x,y,z,w;
       x=(float)a/e;
       y=(float)b/f;
       z=(float)c/g;
       w=(float)d/h;
       int p;
       if(x>=y&&x>=z&&x>=w){
        p=x;
        if(p!=x)p++;
        printf("%d %d %d %d\n",p*e-a,p*f-b,p*g-c,p*h-d);
       }
       else
        if(y>=x&&y>=z&&y>=w){
        p=y;
        if(p!=y)p++;
        printf("%d %d %d %d\n",p*e-a,p*f-b,p*g-c,p*h-d);
       }
        else if(z>=x&&z>=y&&z>=w){
        p=z;
        if(p!=z)p++;
        printf("%d %d %d %d\n",p*e-a,p*f-b,p*g-c,p*h-d);
       }
       else {
        p=w;
        if(p!=w)p++;
        printf("%d %d %d %d\n",p*e-a,p*f-b,p*g-c,p*h-d);
       }

    scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);

    }
}
