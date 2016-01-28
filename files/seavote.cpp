#include<stdio.h>
int main()
{int t,n,y,i,o,p;
scanf("%d",&t);
while(t){
    scanf("%d",&n);o=0;p=0;
    for(i=0;i<n;i++){scanf("%d",&y);o+=y;if(y>0){p++;}}
    if(o<100){printf("NO\n");}
    else if(o==100||o-100<=p-1){printf("YES\n");}
    else{printf("NO\n");}t--;
}
}
