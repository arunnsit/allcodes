#include<stdio.h>
#include<string.h>
int main(){
    int i,j,k,eve=0,l,es=0;char a[100009];
    scanf("%s",&a);
    l=strlen(a);
    for(i=0;a[i]!='\0';i++){if((a[i]-'0')%2==0){eve++;if(a[i]<a[l-1])es++;}}
    if(eve==0)printf("-1\n");
    else if(es){
        for(i=0;a[i]!='\0';i++){
            if((a[i]-'0')%2==0&&a[i]<a[l-1]){
                char s;
                s=a[l-1];
                a[l-1]=a[i];
                a[i]=s;
                break;
            }
        }
        printf("%s\n",a);
    }
    else{
        for(i=l-2;i>=0;i--){
            if((a[i]-'0')%2==0){
                char s;
                s=a[l-1];
                a[l-1]=a[i];
                a[i]=s;
                break;
            }
        }
        printf("%s\n",a);

    }
}
