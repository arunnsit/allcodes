//alpha coder
//segmentd sieve
#include<stdio.h>
#include<math.h>
int a[100002]={0};
int ma=1;
void fillprim(){
    int i,j,d,c;
c=sqrt(100001);a[1]=1;
for(i=2;i<=100000;i++){
        if(a[i]==0)
    for(j=i;j<=100000;j+=i){
        a[j]++;
    }
}

}
int main(){

    int t,i,j,c,c2,k,x,y;
    fillprim();
    scanf("%d",&t);
    while(t){c=0;
            scanf("%d %d %d",&x,&y,&k);
    for(i=x;i<=y;i++){
        if(a[i]==k){c++;printf("%d\n",i);}
    }
        printf("%d\n",c);
    t--;}

}
