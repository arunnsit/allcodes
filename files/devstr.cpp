#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char a[100009];
        int n ,k,x=0,y=0,c=0 ,i;
        scanf("%d %d",&n,&k);
        scanf("%s",&a);
        if(k==1){
            char c2='0';
            int m=0,u=0;
            for(i=0;a[i]!='\0';i++){
                    if(c2!=a[i])m++;
                    if(c2=='0')c2='1';
                    else c2='0';
            }
            c2='1';
            for(i=0;a[i]!='\0';i++){
                    if(c2!=a[i])u++;
                    if(c2=='0')c2='1';
                    else c2='0';
            }
            if(u>m){c2='0';printf("%d\n",m);
                    for(i=0;i<n;i++){
                    printf("%c",c2);
                    if(c2=='0')c2='1';
                    else c2='0';
                }
                printf("\n");
            }
            else{c2='1';printf("%d\n",u);
            for(i=0;i<n;i++){
                    printf("%c",c2);
                    if(c2=='0')c2='1';
                    else c2='0';
                }
            printf("\n");

            }
        }
        else{
            for(i=0;a[i]!='\0';i++){
                if(a[i]=='0')y++;
                else y=0;
                if(a[i]=='1')x++;
                else x=0;
                if(x==k+1){a[i-1]='0';c++;x=1;}
                else if(y==k+1){a[i-1]='1';c++;y=1;}
            }
                    printf("%d\n%s\n",c,a);
        }
    }
}
