#include<stdio.h>
long long int  a[500004];
int main(){
   long long int  n,i,j,o,o2,k,coun;long long int s=0,ch,l1,r2,l=0,r=0,mid;
    scanf("%lld",&n);
    for(i=0;i<n;i++){scanf("%lld",&a[i]);s+=a[i];}//printf("%d\n",a[i]);}
    ch=s/3;
    if(s%3!=0){printf("0\n");}
    else{coun=0;
            if(ch==0){l=0;
                for(i=0;i<n;i++){l+=a[i];if(l==0){coun++;}}
                printf("%lld\n",((coun-2)*(coun-1))/2);
            }
            else{l=0;r=0;o=1;o2=1;mid=0;
               for(i=0;i<n;i++){l+=a[i];if(l==ch)break;}
               for(j=n-1;i>=0;i--){r+=a[i];if(r==ch)break;}
               if(j-i>1){for(k=i+1;k<=j-1;k++){mid+=a[k];if(mid==0){o++;}if(mid==ch)break;}mid=0;
               for(k=j-1;k>=i+1;k--){mid+=a[k];if(mid==0){o2++;}if(mid==ch)break;}
               printf("%lld\n",o*o2);}
               else{printf("0\n");}
            }
    }
}
