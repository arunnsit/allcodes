#include<stdio.h>
int check=0,N,cs=0;
int convert(int c[20],int n){
    long long int b=0,i=0;
    while(i!=n){
        b=b*10+c[i];
        i++;
    }
    //printf("a:%d b:%d\n",N,b);
    if(N==b)return 1;
    else return 0;
}
int permt(int p[20],int c,int n){
    if(c>n)return 0;
    if(c==n){
            int y=convert(p,n);            cs++;

        if(y)
        {check=1;
        }
    return 0;
    }int i;
    for(i=4;i<=7;i+=3){
        if(!check){
            p[c]=i;
            //for(int i=0;i<n;i++)printf("%d",p[i]);printf("\n");
            permt(p,c+1,n);
        }
    }
    return 0;
}
int main(){
    int n=0,nc;int c[20]={0};
    scanf("%d",&N);nc=N;
    while(nc){
        nc=nc/10;
        n++;
    }
    //printf("no. of digit :%d\n",n);
    for(int i=1;i<=n;i++){permt(c,0,i);}
    printf("%d\n",cs);
}
