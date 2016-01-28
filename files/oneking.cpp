#include<stdio.h>
void quickSort(int arr[100009][2], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2][0];

      /* partition */
      while (i <= j) {
            while (arr[i][0] < pivot)
                  i++;
            while (arr[j][0] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i][0];
                  arr[i][0] = arr[j][0];
                  arr[j][0] = tmp;
                  tmp =arr[i][0];
                  tmp=arr[i][1];
                  arr[i][1]=arr[j][1];
                  arr[j][1]=tmp;
                  i++;
                  j--;
            }
      };

      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}

int main()
{
    int t,n,i,a[100008][2],j;
    scanf("%d",&t);
    while(t){ scanf("%d",&n);int coun=0;
   for(i=0;i<n;i++){scanf("%d %d",&a[i][1],&a[i][0]);coun=1;}
   quickSort(a,0,n-1);

 i=1;j=0;
while(i<n){
    if(a[i][1]>a[j][0]){coun++;j=i;}
    i++;
}


            printf("%d\n",coun);

    t--;}

}
