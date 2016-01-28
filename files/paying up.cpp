#include<stdio.h>
#include<algorithm>
int main(){
    int t,e,s,i,j,d;
    scanf("%d ",&t);
    while(t){int f;scanf("%d %d",&f,&e);d=0;
        int b[22][2002]={0};s=0;int c[22][2002]={0};int a[700][2]={0};
for(i=1;i<=f;i++){scanf("%d",&a[i][0]);a[i][1]=1;}

for(i=1;i<=f;i++)
for(j=0;j<=e;j++){if(j-a[i][0]>=0)b[i][j]=std::max(b[i-1][j],b[i-1][j-a[i][0]]+a[i][1]);else b[i][j]=b[i-1][j];}i=f;j=e;
while(i>0&&j>0){
    if(b[i-1][j-a[i][0]]==b[i][j]){j=j-a[i][0];d+=a[i][0];i--;}
    else i--;
}
    if(e==d){printf("YES %d\n",d);}else {printf("NO %d\n",d);}
    t--;

}}
