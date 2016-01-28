#include<stdio.h>
long long int a[1000009]={0},rema[1000009]={0},remb[1000009]={0};
char b[1000009];
int main(){
    long long int i,j,c=0,d,p,ten=1,pos=0,chc=0;
    scanf("%s",&b);
    scanf("%I64d %I64d",&d,&p);
    for(i=0;b[i]!='\0';i++){a[i+1]=b[i]-'0';c++;}rema[1]=a[1]%d;
    for(i=1;i<=c;i++){
        rema[i]=(rema[i-1]*10+a[i])%d;
    }
    for(i=c;i>=1;i--){
    remb[i]=(a[i]*ten+remb[i+1])%p;
    ten=(ten*10)%p;

}
for(i=2;i<=c;i++){
    if(rema[i-1]==remb[i]&&rema[i-1]==0&&a[i]!=0){
        chc=1;
        pos=i;
    }
}
if(chc==0){printf("NO\n");}
else{printf("YES\n");
    for(i=1;i<pos;i++)printf("%d",a[i]);
    printf("\n");
    for(i=i;i<=c;i++)printf("%d",a[i]);
        printf("\n");

}

}
