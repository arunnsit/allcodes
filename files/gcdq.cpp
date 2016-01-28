#include<stdio.h>
int gcd(int a, int b){
    if(b==0){return a;}
    else return gcd(b,a%b);
}
int main()
{int t,i,j,k,n,q,prev,l,r;
scanf("%d",&t);
while(t){int a[100009],b[100009],c[100009];
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++){scanf("%d",&a[i]);}prev=a[0];b[0]=a[0];
    for(i=1;i<n;i++){prev=gcd(prev,a[i]);b[i]=prev;}prev=a[n-1];c[n-1]=a[n-1];
    for(i=n-2;i>=0;i--){prev=gcd(prev,a[i]);c[i]=prev;}
    for(i=0;i<q;i++)
    {scanf("%d %d",&l,&r);l--;
    if(l==0){printf("%d\n",c[r]);}
    else if(r==n){printf("%d\n",b[l-1]);}
    else {printf("%d\n",gcd(c[r],b[l-1]));}


    }





t--;}

}
