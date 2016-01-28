
#include<stdio.h>
#include<algorithm>
int main(){
    int n,i,a[200]={0},str=0,c=0,least,cur=1,sol=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    std::sort(a,a+n);
    for(i=1;i<n;i++){
        least=i/cur;
        if(a[i]<least)cur++;

    }
    printf("%d\n",cur);

}
