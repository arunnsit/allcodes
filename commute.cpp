#include<stdio.h>
int main()

{int t,n,i,a[2][3],c;
scanf("%d",&t);
while(t)
{scanf("%d",&n);c=0;scanf("%d %d %d",&a[0][0],&a[0][1],&a[0][2]);c+=a[0][0]+a[0][1];
for(i=1;i<n;i++){scanf("%d %d %d",&a[i%2][0],&a[i%2][1],&a[i%2][2]);if(c>a[i%2][0]){while(c>a[i%2][0]){a[i%2][0]+=a[i%2][2];}c=a[i%2][0];}else{c=a[i%2][0];} c+=a[i%2][1];}
    printf("%d\n",c);
t--;}

}
