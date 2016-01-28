//author:arunnsit
//sol : trick :it is not mandatory that the length of all the equal rods to sold , is equal to one of the length already present
#include<stdio.h>
#include<algorithm>
 int a[1009];
int main(){
     int t,n,m,c,i,j,sum,sum2;
    scanf("%d",&t);
    while(t){
            scanf("%d %d %d",&n,&m,&c);
            for(i=0;i<n;i++)scanf("%d",&a[i]);
            std::sort(a,a+n);
            sum=0;
            sum2=0;
            for(j=1;j<=a[n-1];j++){
                    sum=0;
            for(i=0;i<n;i++){
                if(a[i]==j){
                    sum+=a[i]*m;
                }
                else{int x,y;//x is the number of cuts,y is number of road that can be produced;
                     if(a[i]%j==0){
                            x=a[i]/j-1;
                            y=a[i]/j;
                     }
                     else{
                            x=a[i]/j;
                            y=a[i]/j;
                     }
                    if(a[i]*m-c*(x)>0){
                        sum+=(y*j)*m-c*(x);
                    }
                }

            }if(sum>sum2){
                sum2=sum;

            }
            }
        printf("%d\n",sum2);
    t--;}
}
