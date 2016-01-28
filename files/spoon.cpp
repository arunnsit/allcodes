#include<stdio.h>
int main(){
    int t,r,c,i,j,ch;char a[101][100];
    scanf("%d",&t);
    while(t){ch=0;
            scanf("%d %d",&r,&c);
            for(i=0;i<r;i++)scanf("%s",a[i]);
            for(i=0;i<r;i++)
            for(j=0;j<c-4;j++){
                if((a[i][j]=='S'||a[i][j]=='s')&&(a[i][j+1]=='P'||a[i][j+1]=='p')&&(a[i][j+2]=='O'||a[i][j+2]=='o')&&(a[i][j+3]=='O'||a[i][j+3]=='o')&&(a[i][j+4]=='N'||a[i][j+4]=='n'))
                   ch=1;
            }
            if(ch==0){
            for(j=0;j<c;j++)
            for(i=0;i<r-4;i++)
            {
                if((a[i][j]=='S'||a[i][j]=='s')&&(a[i+1][j]=='P'||a[i+1][j]=='p')&&(a[i+2][j]=='O'||a[i+2][j]=='o')&&(a[i+3][j]=='O'||a[i+3][j]=='o')&&(a[i+4][j]=='N'||a[i+4][j]=='n'))
                   ch=1;
            }

            }
            if(ch){printf("There is a spoon!\n");}
            else{printf("There is indeed no spoon!\n");}

    t--;}
}
