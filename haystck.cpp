#include<stdio.h>
#include<string.h>
char total[100000000],a[10000];int l,tl=0;
void compare(){
    int prev=0,j,i;
    for( i=0;i<=tl;i++){
        for( j=0;j<l;j++){
            if(total[i]==a[0]&&j!=0){
                prev=i;
            }
            if(total[i]!=a[j])break;
            i++;
        }
        if(j==l){printf("%d\n",i-l);}
        if(prev){i=prev-1;}
        else i--;

}}
int main()
{int i;char c,prev=0;
scanf("%d",&l);
scanf("%s",&a);
getchar();
while(scanf("%c",&c)>0){
 total[tl]=c;tl++;
    if(c==a[0]){
        prev=tl-1;
    }
    if(tl-prev>=0){
            compare();
        tl=0;
    }
}
printf("\n");
}
