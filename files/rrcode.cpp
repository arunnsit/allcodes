#include<stdio.h>
int  f(int  n, int  k,int  a,char y[10],int  x[1003]){
    int  i,j;
    if(y[0]=='X'){if(k%2!=0)
        for(j=0;j<n;j++){
            a=a^x[j];
        }
        return a;
    }
        else if(y[0]=='O'){
                if(k!=0)
        for(j=0;j<n;j++){
            a=a|x[j];
        }
        return a;

        }
    else {
            if(k!=0)
        for(j=0;j<n;j++){
            a=a&x[j];
        }
        return a;

    }
}
int main(){
    int  t,n,a,k,i;
    scanf("%d",&t);
    while(t){int  x[1003];char y[10];
scanf("%d %d %d",&n,&k,&a);
        for(i=0;i<n;i++)scanf("%d",&x[i]);
        scanf("%s",&y);
        printf("%d\n",f(n,k,a,y,x));

    t--;}

}
