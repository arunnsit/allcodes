#include<stdio.h>
int main(){
    char a[2007];int i,j,stac,sol,t=1;
    scanf("%s",&a);
    while(a[0]!='-'){
            stac=0;sol=0;
        for(i=0;a[i]!='\0'&&a[i]!='\r';i++){
            if(stac==0&&a[i]=='}'){sol++;stac++;}
            else if(stac&&a[i]=='}'){stac--;}
            else{stac++;}
        }
        sol+=(stac+1)/2;
        printf("%d. %d\n",t,sol);
        t++;
        scanf("%s",&a);
    }
}
