#include<stdio.h>
int main(){
    int n,x,i,j,c,r,b[7][7]={0};char a[60];long long int ans=0;
    b[1][1]=1;
    b[2][2]=1;
    b[3][3]=1;
    b[4][4]=1;
    b[5][5]=1;
    b[6][6]=1;
    b[2][1]=2;
    b[3][1]=3;
    b[3][2]=3;
    b[4][1]=4;
    b[4][3]=4;
    b[4][2]=6;
    b[5][1]=5;
    b[5][2]=10;
    b[5][3]=10;
    b[5][4]=5;
    b[6][1]=6;
    b[6][2]=15;
    b[6][3]=20;
    b[6][4]=15;
    b[6][5]=6;
    scanf("%d %d",&x,&n);
    while(n){int start=0;int end=53;
            scanf("%s",&a);
    while(start+1<end){c=0;
        if(a[start]=='0')c++;
        if(a[start+1]=='0')c++;
        if(a[start+2]=='0')c++;
        if(a[start+3]=='0')c++;
        if(a[end]=='0')c++;
        if(a[end-1]=='0')c++;
        ans+=b[c][x];
        start+=4;
        end-=2;
    }

    n--;}    printf("%lld\n",ans);


}
