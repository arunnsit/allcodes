#include<stdio.h>
int &y(){
     int  *i=10;
    return &i;
}
int main(){
    int *m;
    m=y();
    printf("%d\n",*m);
}
