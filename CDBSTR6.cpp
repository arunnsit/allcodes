//alpha coder
#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t){int sol=0,a[100009],b[100009],ac=0,bc=0,n,i,j;
scanf("%d",&n);ac=n;
for(i=0;i<n;i++)scanf("%d",&a[i]);
for(i=30;i>=0;i--){
    for(j=0;j<ac;j++){
        if(1&(a[j]>>i)){
            b[bc]=a[j];
            bc++;
        }
    }
    if(bc>2){
        for(j=0;j<bc;j++){
            a[j]=b[j];
        }
        ac=bc;
        bc=0;
        sol+=pow(2,i);
    }
    else if(bc==2){
        sol=b[0]&b[1];
        break;
    }

    else{
bc=0;
    }
}printf("%d\n",sol);

t--;}
}
