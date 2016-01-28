//author:arunnsit
//calkwalk
#include<stdio.h>
int main(){
    int t,i,j,l;char a[100007];long long int c=0;
    scanf("%d",&t);
    while(t){c=0;
            scanf("%d %s",&l,&a);
for(i=0;i<l;i++){
        if(a[i]=='1')c++;

}c=(c*(c-1))/2+c;
printf("%lld\n",c);

    t--;}
}
