#include<stdio.h>
#include<string.h>
#include<algorithm>
int main(){
    char a[2000];
    int i;
    gets(a);
    while(a[0]!='*'&&a[1]!='*'){
        int s=0,k=0,check=1;
        for(i=0;a[i]!='\0';i++){
            if(s==0&&a[i]!=' '&&a[i+1]!='\0'){
                s=1;
                k=a[i];
            }
            else if(a[i]==' '&&a[i+1]!=' '&&s==1&&a[i+1]!='\0'){
                if(abs(a[i+1]-k)==32||k==a[i+1])check=1;
                else {check=0;break;}
                //printf("%c %c %d\n",a[i+1],k,check);
            }
        }
        if(check)printf("Y\n");
        else printf("N\n");
            gets(a);

    }

}
