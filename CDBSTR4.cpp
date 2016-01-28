//alpha coder
//segmentd sieve
#include<stdio.h>
#include<math.h>
int a[1000002]={0};
int ma=1;
void fillprim(){
    int i,j,d,c;
a[1]=0;
for(i=2;i<=100009;i++){
        if(a[i]==0)
    for(j=i;j<=100009;j+=i){
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
        if(a[i]==k){c++;}
    }
        printf("%d\n",c);
    t--;}
}
