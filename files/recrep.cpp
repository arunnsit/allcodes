#include<stdio.h>
#include<string.h>
char a[10002][1002],b[1002];
int main(){
    int t,n,i,j;
    scanf("%d",&t);
    while(t){j=1;
            scanf("%d",&n);
            for(i=0;i<n;i++){
                scanf("%s",&a[i]);
            }
             scanf("%s",&b);
            for(i=0;i<n;i++){
                    if(!strcmp(a[i],b)){
                        printf("yes\n");
                        j=0;
                        break;
                    }
            }
            if(j)printf("no\n");



    t--;}
}
