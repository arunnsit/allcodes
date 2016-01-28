#include<stdio.h>
#include<string.h>
int main(){
    int n,t,sol=0,c;
    scanf("%d",&t);
    while(t--){sol=9999;int neg[1002]={0},pos[1003]={0};
    scanf("%d",&n);
   for(int i=0;i<n;i++){
    scanf("%d",&c);
    if(c>=0){
        pos[c]++;
        if(pos[c]>n/2)sol=c;
    }
    if(c<0){
        neg[-1*c]++;
        if(neg[-1*c]>n/2)sol=c;
    }
   }
   if(sol!=9999)printf("YES %d\n",sol);
   else printf("NO\n");
}
}
