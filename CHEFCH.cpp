//alphacoder
#include<stdio.h>
int main(){
    int t,i,c,cp;char a[100006],ch[2];
    scanf("%d",&t);
    while(t){
        scanf("%s",&a);c=0;cp=0;
        ch[0]='-';ch[1]='+';
        for(i=0;a[i]!='\0';i++){
            if(ch[i%2]!=a[i])c++;
            if(ch[(i+1)%2]!=a[i])cp++;
        }c=(c>cp)?cp:c;
        printf("%d\n",c);
    t--;}
}
