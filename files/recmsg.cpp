#include<stdio.h>
int main(){
    int t,i,j,c;char a[2000];
    scanf("%d",&t);
    while(t){
            scanf("%s",&a);c=0;
            for(i=0;a[i]!='\0';i++){
                c+=a[i]-96;
            }
            printf("%d\n",c);

    t--;}
}
