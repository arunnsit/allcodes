#include<stdio.h>
#include<algorithm>
int main(){
    int t,i,j,n,m,x,k,carry,check,o;
    scanf("%d",&t);
    while(t){char a[500];int b[500]={0},c[500]={0},d[500]={0};
            scanf("%s",&a);
for(i=0;a[i]!='+'&&a[i]!='-';i++){
    b[i+1]=a[i]-48;
}n=i;
if(a[i]=='+'){check=1;i++;}
else{check=2;i++;}
for(j=0;a[j+i]!='\0';j++){
    c[j+1]=a[j+i]-48;
}
m=j;
if(check==1){
carry=0;k=std::max(m,n);o=k;
while(1){x=b[n]+c[m]+carry;
if(x>9){
    d[k]=x%10;
    carry=x/10;
    k--;
}
else{
    d[k]=x;
    carry=0;
    k--;
}
  if(m>0&&n>0){m--;n--;}
  else if(m>0&&n==0){m--;}
  else if(m==0&&n>0){n--;}
  else if(m==0&&n==0){break;}
}
if(d[0]!=0){printf("%d",d[0]);}
for(i=1;i<=o;i++){printf("%d",d[i]);}printf("\n");}













    t--;}
}
