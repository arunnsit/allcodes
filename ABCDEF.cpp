#include<stdio.h>
#include<algorithm>
using namespace std;
int has1[1000009]={0},has[1000009]={0};
int main(){
     int n,i,in[105],a,b,c,d,e,f,j; int x=0,sol=0,t1=0,t2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&in[i]);
    for(a=0;a<n;a++)
        for(b=0;b<n;b++)
    for(c=0;c<n;c++){
        x=in[a]*in[b]+in[c];
        has[t1]=x;
        t1++;
    }
    std::sort(has,has+t1);
    for(c=0;c<n;c++)
        for(f=0;f<n;f++)
    for(d=0;d<n;d++){
        if(in[d]){
            x=in[d]*(in[f]+in[c]);
            has1[t2]=x;
            t2++;
    }}
        std::sort(has1,has1+t2);j=0;
        //for(i=0;i<t1;i++)printf("%d ",has[i]);printf("\n");
        //for(i=0;i<t2;i++)printf("%d ",has1[i]);printf("\n");
j=0;i=0;
while(1){
    if(has1[i]<has[j]){i++;}
    else if(has1[i]>has[j]){j++;}
    else if(has1[i]==has[j]){
        int x=has1[i],y=has[j],c=0,c1=0;
        while(has1[i]==x){i++;c++;}
        while(has[j]==y){j++;c1++;}
        sol+=c*c1;
    }
    if(i>=t2||j>=t1)break;
}
        printf("%d\n",sol);
    }


