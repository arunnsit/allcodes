#include<stdio.h>
int a[100008];
int main(){
    int n,q,l,r,i,j,ch;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&q);
    for(i=0;i<q;i++){ch=1;
            scanf("%d %d",&l,&r);r--;
            for(j=l;j<r;j++){
                if(a[j]>a[l-1]){printf("NO\n");ch=0;break;}}
                if(ch)printf("YES\n");

            }
    }


