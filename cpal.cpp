#include<stdio.h>
#include<string.h>
int main(){
    int t,a[3],b[3],f[3],o[3],c,d,i,k,l,p,j,y;char g[7],h[7];
    scanf("%d",&t);
    while(t){p=0;y=0;
        scanf("%d:%d:%d",&a[0],&a[1],&a[2]);
        f[0]=a[0];
        if(a[1]%11!=0)f[1]=a[1]+11-a[1]%11;
        else{f[1]=a[1];}
        f[2]=a[2];c=11;
        scanf("%d:%d:%d",&b[0],&b[1],&b[2]);
        o[0]=b[0];
        o[1]=b[1];
        o[2]=b[2];
        for(i=a[0];i<=b[0];i++){
                if(i==o[0]){b[1]=o[1];}
                else{b[1]=59;}
                if(i!=f[0]){a[1]=0;}
                else{a[1]=f[1];}

        for(j=a[1];j<=b[1];j+=c){
                if(i==o[0]&&j==o[1]){b[2]=o[2];}
                else{b[2]=59;}
                if(i==f[0]&&j==f[1]){a[2]=f[2];}
                else{a[2]=0;}
         for(l=a[2];l<=b[2];l++){
           if((i%10==(l/10)%10)&&((i/10)%10==l%10)&&(j%10==(j/10)%10)){p++;}

         }
        }
        }

        printf("%d\n",p);

    t--;}
}
