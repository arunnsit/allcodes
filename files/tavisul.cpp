#include<stdio.h>
int main()
{int t,n,q,c,l,r,i;
scanf("%d",&t);
while(t)
{scanf("%d %d %d",&n,&c,&q);for(i=0;i<q;i++){scanf("%d %d",&l,&r);
if(c>=l&&c<=r){c=(l+r)-c;
}

}
printf("%d\n",c);



t--;}

}
