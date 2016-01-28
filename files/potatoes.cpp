#include<stdio.h>
#include<math.h>
int main()
{int t,m,n,a,b,divi,o,i,j;
scanf("%d",&t);
while(t){scanf("%d %d",&m,&n);m=m+n;
for(i=m+1;i<2006;i++){
    divi=0;
for(j=2;j<=sqrt(i);j++){
    if(i%j==0){
        divi++;
        break;
}}
if(divi==0){
        printf("%d\n",i-m);break;
}


}

t--;


















}

}
