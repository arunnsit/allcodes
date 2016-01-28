#include<stdio.h>
int main()
{char a[100009]; int l,i,j,k,t,p,sum,coun,n,q,ty,x,y,b[100009],c[100009];
scanf("%d %d",&n,&q);sum=0;
scanf("%s",&a);l=n;b[0]=0;b[1]=0;
for(i=0;i<n;i++){sum=(sum+a[i]-48)%3;
    b[i+1]=(b[i]+a[i]-48)%3;}c[n-1]=0;c[n]=0;
for(i=n-1;i>=0;i--){
    c[i]=(c[i+1]+a[i]-48)%3;}

//for(i=1;i<=n;i++)printf("%d ",b[i]);printf("\n");
//for(i=n-1;i>=0;i--)printf("%d ",c[i]);printf("\n");

for(p=0;p<q;p++){
coun=0;
scanf("%d %d %d",&ty,&x,&y);
if(ty==1){sum=(sum-a[x-1]+48+y)%3;
for(i=x;i<=n;i++){b[i]=(b[i]-a[x-1]+48+y)%3;}
for(i=x-1;i>=0;i--){c[i]=(c[i]-a[x-1]+48+y)%3;}
a[x-1]=y+48;
//for(i=1;i<=n;i++)printf("%d ",b[i]);printf("\n");
//for(i=n-1;i>=0;i--)printf("%d ",c[i]);printf("\n");

}
else{for(i=x-1;i<y;i++){
    for(j=y;j>i;j--){
        if((sum-b[i]-c[j])%3==0){coun++;}
       // printf("start:%d end:%d %d-%d-%d=%d\n",i,j,sum,b[i],c[j],sum-b[i]-c[j]);
    }
}

 printf("%d\n",coun);
 }


}

}
