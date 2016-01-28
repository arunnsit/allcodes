#include<stdio.h>
int a[100008];
int gcd(int a, int b){
    if(b==0){return a;}
    else return gcd(b,a%b);
}
int main ()
{int t,n,i,prev;
scanf("%d",&t);
while(t){
    scanf("%d",&n);scanf("%d",&a[0]);prev=a[0];
    for(i=1;i<n;i++){scanf("%d",&a[i]);
        prev=gcd(prev,a[i]);
    }
    if(prev==1){
        printf("%d\n",n);

    }
    else {
        printf("-1\n");
    }

t--;}


}
