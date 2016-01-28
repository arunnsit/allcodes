#include<stdio.h>
int a[1000005][27]={0};
char p[1000005];
int main(){
    int q,t,i,j,k,l,r;char ch[2];
    scanf("%s",&p);
    for(i=0;p[i]!='\0';i++){
            k=i+1;
        for(j=0;j<27;j++){
            a[k][j]=a[k-1][j];
        }
    a[k][p[i]-97]++;
    }
    scanf("%d",&t);
    while(t--){
        scanf("%s %d %d",&ch,&l,&r);
        printf("%d\n",a[r][ch[0]-97]-a[l-1][ch[0]-97]);
    }


}
