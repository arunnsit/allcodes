#include<stdio.h>
#include<algorithm>
#include<string.h>
int main(){
    int n,i,j;
    char a[100][100];
    scanf("%d",&n);
    getchar();
    while(n){
        for(i=0;i<n;i++)
        gets(a[i]);
        long long int x=0,multi=1;
        for(i=n-1;i>=0;i--){
            int p=0;
            for(j=0;a[i][j]!='\0';j++){
                if(a[i][j]=='.')p++;
                if(a[i][j]=='-')p+=5;
            }
                        x+=multi*p;

            if(n-1-i==1){multi=360;}
            else multi*=20;
        }
        printf("%lld\n",x);
        scanf("%d",&n);
            getchar();

    }
}
