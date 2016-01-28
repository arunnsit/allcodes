#include<stdio.h>
int a[1000009],b[1000009];
int main(){
    int n,k,i,j,cur=0,top=1,ma=0,mi;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&k);

    for(i=0;i<k;i++){
        if(a[i]>=ma){
            ma=a[i];
            mi=i;
        }
        }

    b[cur]=mi;
    for(i=mi+1;i<k;i++){b[top++]=i;}
    printf("%d",a[mi]);
    for(i=k;i<n;i++){
        if(a[i]>=a[b[cur]]){
            cur=0;
            b[cur]=i;
        }
        else{
            b[top]=i;
            top++;
        }
        if(i-k==b[cur]){
            ma=0;

            for(j=cur+1;j<top;j++){
                if(ma<=a[b[j]]){
                    ma=a[b[j]];
                    mi=j;
                }
            }
            //printf("\nma%d search b/w %d nd %d\n",ma,cur+1,top-1);
            cur=mi;
        }
        while(i-b[cur]>=k)cur++;
        printf(" %d",a[b[cur]]);
    }
    printf("\n");
}
