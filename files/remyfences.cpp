#include<stdio.h>
void quickSort(int arr[100009],char b[100009] ,int left, int right) {
      int i = left;int j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];

      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j]> pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  tmp =arr[i];
                  tmp=b[i];
                  b[i]=b[j];
                  b[j]=tmp;
                  i++;
                  j--;
            }
      };

      if (left < j)
            quickSort(arr,b, left, j);
      if (i < right)
            quickSort(arr,b, i, right);
}
int main(){
    int t,f,p,i,mod=1000000009 ,a[100009],coun;char b[100009];
    scanf("%d",&t);
    while(t){scanf("%d %d",&f,&p);   // scanf("%c %d",&b[0],&a[0]);
coun=1;
for(i=0;i<p;i++){
    scanf("%s %d",&b[i],&a[i]);

}
quickSort(a,b,0,p);
for(i=1;i<p;i++){
  if(b[i]!=b[i-1]){
    coun=(coun*(a[i]-a[i-1]+1))%mod;printf("%d\n",a[i]);
  }
}printf("%d\n",coun);

    t--;}
}
