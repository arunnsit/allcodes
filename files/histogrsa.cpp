#include<stdio.h>
#include<algorithm>
int main(){
    int t;
    int n;
        scanf("%d",&n);
    while(n){
        long long int a[50000];
        int i;
        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);

        }
        long long int b[5000]={0},ma=a[0];
        int top=0;
        //b[0]=0;
        for(i=1;i<n+1;i++){
                printf("%lld %lld %d\n",a[i-1],a[b[top-1]],top);
            if(a[i-1]<a[b[top-1]]&&top>0){
                while(a[i-1]<a[b[top-1]]&&top>0){
                        ma=ma>(a[b[top-1]]*(i-b[top-2]-1))?ma:a[b[top-1]]*(i-b[top-2]-1);
                        printf("ma:%lld\n",ma);
                        top--;
            }
            b[top]=i-1;
                top++;
        }
            else{b[top]=i-1;
                top++;
            }

            }
            printf("done");
            while(top){
                ma=ma>(a[b[top-1]]*(n+1-b[top-2]-1))?ma:a[b[top-1]]*(n+1-b[top-2]-1);
                                        printf("ma:%lld\n",ma);

                top--;
            }
            printf("%lld\n",ma);

        scanf("%d",&n);
    }

}
