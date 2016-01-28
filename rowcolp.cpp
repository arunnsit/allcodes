#include<stdio.h>
int c[314170]={0},r[314170]={0};
int main()
{int n,q,mc=0,mr=0,mci=0,mri=0,i,j,t1,t2;char a[20];
scanf("%d %d",&n,&q);
for(i=0;i<q;i++){
        scanf("%s %d %d",&a,&t1,&t2);
        if(a[0]=='R'){
            r[t1]+=t2;
            if(mr<r[t1]){mr=r[t1];}
        }
        else{
                c[t1]+=t2;
            if(mc<c[t1]){mc=c[t1];}

        }
}

printf("%d\n",mc+mr);

}
