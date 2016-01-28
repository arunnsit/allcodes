#include<stdio.h>
#include<math.h>
inline long long int gcd(long long int p,long long int coun)
{if(coun==0){return p;}
else{return gcd(coun,p%coun);}

}
int main()
{int n,k,j,l;long long p,q,coun=0,i,o;scanf("%d %d",&n,&k);
p=pow(2,n);q=pow(2,k)-1;
for(i=q;i<p;i++){l=0;
    for(j=0;j<n;j++)
    {if(1&(i>>j)){l++;if(l==k){coun++;break;}}
        else{l=0;}

    }
}
o=gcd(coun,p);
printf("%lld/%lld\n",coun/o,p/o);


}
