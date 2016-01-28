#include<stdio.h>
#include<algorithm>
int main(){
int t,k,n,i,g,temp,ch; long long int a[100],b,c,cc,s;float f;
scanf("%d",&t);
while(t)
{scanf("%d %d",&n,&k);b=0;s=0;ch=0;
for(i=0;i<n;i++){scanf("%lld",&a[i]);if(b<a[i]){b=a[i];}s+=a[i];}
f=(float)s/k;c=f;
if(f>c){printf("no\n");}
else if(b>c){printf("no\n");}
else{std::sort(a,a+n);g=n-1;i=0;
while(i<=g){cc=c-a[g];a[g]=0;g--;
while(cc&&i<=g){cc-=a[i];a[i]=0;i++;if(cc<0){ch=1;}}
}
if(ch==1){printf("no\n");}
else{printf("yes\n");}

}t--;}
}
