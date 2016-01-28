#include<stdio.h>
#include<algorithm>
int a[10000000]={0},b[10000000]={0};
int main(){
    int n,m1,m,q,en=1,m0,l,r,x,i,temp,ma,my,k,coun;
    scanf("%d",&m1);
    while(m1){
        scanf("%d",&m);
        if(m==0){
                scanf("%d",&m0);
                a[en]=m0;
                en++;
        }
        if(m==1){
                ma=0;
            scanf("%d %d %d",&l,&r,&x);
            temp=std::min(r,en+1);a[en]=0;a[en+1]=0;
         for(i=l;i<=temp;i++){
                if((x^a[i])>ma){
                    ma=x^a[i];
                    my=a[i];
            }
         }
         printf("%d\n",my);

        }
        if(m==2){
                scanf("%d",&k);en=en-k;

        }
        if(m==3){coun=0;
                scanf("%d %d %d",&l,&r,&x);
                temp=en;
        for(i=l;i<=r;i++){
            if(i+1>=en){a[i+1]=0;}
            if(a[i]<=x)coun++;
        }
        printf("%d\n",coun);

        }
        if(m==4){
                scanf("%d %d %d",&l,&r,&k);
                for(i=l;i<=r;i++){
                    if(i+1>=en){a[i+1]=0;}
                    b[i-l]=a[i];
                }
                std::sort(b,b+r-l+1);
                printf("%d\n",b[k-1]);
        }

    m1--;}

}
