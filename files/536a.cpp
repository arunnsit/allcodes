#include<stdio.h>
int main(){
    int n;
    char a[11][100]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    char b[11][100]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    char c[11][100]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    scanf("%d",&n);
    if(n<10){printf("%s\n",a[n]);}
    else if(n>=10&&n<=19){printf("%s\n",b[n-10]);}
    else{
        if(n%10==0){printf("%s\n",c[n/10-2]);}
        else{
            printf("%s-%s\n",c[n/10-2],a[n%10]);
        }
    }


}
