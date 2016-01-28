//alpha coder
#include<stdio.h>
#include<math.h>
void quickSort(long long int arr[100009][4],long long  int left,long long  int right) {
     long long  int i = left, j = right;
      long long int tmp;
      long long int pivot = arr[(left + right) / 2][2];

      /* partition */
      while (i <= j) {
            while (arr[i][2] < pivot)
                  i++;
            while (arr[j][2] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i][3];
                  arr[i][3] = arr[j][3];
                  arr[j][3] = tmp;
                  tmp=arr[i][1];
                  arr[i][1]=arr[j][1];
                  arr[j][1]=tmp;
                  tmp=arr[i][0];
                  arr[i][0]=arr[j][0];
                  arr[j][0]=tmp;
                  tmp=arr[i][2];
                  arr[i][2]=arr[j][2];
                  arr[j][2]=tmp;
                  i++;
                  j--;
            }
      };

      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}
long long int a[1000][1000]={0},e[100004][4];
int main(){
    long long ans=1,o=1,n,m,k,i,j,l,p,b,c,u,d,mod=1000000007;
    scanf("%lld %lld %lld",&n,&m,&k);

    for(j=0;j<m;j++)a[0][j]=1; //fills first element as 1

    for(i=1;i<n+2;i++){
        for(j=0;j<m;j++){
            a[i][j]=o;         // initial fills the dp
        }
        o=((o%mod)*(m%mod))%mod;
    }
    for(i=0;i<k;i++){
        scanf("%lld %lld %lld %lld",&e[i][0],&e[i][1],&e[i][2],&e[i][3]);}
        quickSort(e,0,k-1);

    for(i=0;i<k;i++){
        p=e[i][0],b=e[i][1],c=e[i][2],d=e[i][3];
         //printf("%lld %lld %lld %lld",e[i][0],e[i][1],e[i][2],e[i][3]);
        u=1;
        a[c][d]= ((a[c][d]%mod)+(a[p][b]%mod))%mod;
            for(l=c+1;l<n+2;l++){
                for(j=0;j<m;j++){
                    a[l][j]=(a[l][j]%mod+(((u)%mod)*a[p][b])%mod)%mod;
                }
                u=((u%mod)*(m%mod))%mod;

        }
    }
printf("%lld\n",a[n+1][0]);
}
