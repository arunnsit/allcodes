#include<stdio.h>
#include<algorithm>
int main(){
    int t=10,s=0,temp[10],i=0;
    for(i=0;i<10;i++)scanf("%d",&temp[i]);
    for(i=0;i<10;i++){s+=temp[i];if(s>100)break;}
    if(s>100){
        if(abs(100-s)<abs(100-s+temp[i]))printf("%d\n",s);
        else if(abs(100-s)>abs(100-s+temp[i])) printf("%d\n",s-temp[i]);
        else printf("%d\n",s);
    }
    else printf("%d\n",s);
}
