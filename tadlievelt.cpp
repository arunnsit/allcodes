#include<stdio.h>
#include<algorithm>
void quickSort(int arr[100001],int b[100001],int a[100001], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];

      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  tmp =arr[i];
                  tmp=a[i];
                  a[i]=a[j];
                  a[j]=tmp;
                  tmp=b[i];
                  b[i]=b[j];
                  b[j]=tmp;


                  i++;
                  j--;
            }
      };

      if (left < j)
            quickSort(arr,b,a,left, j);
      if (i < right)
            quickSort(arr,b,a,i, right);
}
int main(){
    int n,x,y,i,s=0,k;int a[100001],b[100001],d[100001];
    scanf("%d %d %d",&n,&x,&y);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
       d[i]=(b[i]-a[i]);
    }
    quickSort(d,b,a,0,n-1);

i=0;
while(i<x&&d[i]<=0){
    s+=a[i];i++;
}
k=i;
while(k<n){s+=b[k];k++;}
printf("%d\n",s);

}
