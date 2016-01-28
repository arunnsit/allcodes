#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int a[1000]={0},i,b[1000][3]={0},j,m,r,t,k,ans=0;
    scanf("%d %d %d",&m,&t,&r);
    for(i=0;i<m;i++){scanf("%d",&a[i]);b[a[i]+r][2]=1;}
    sort(a,a+m);
    for(i=0;i<m;i++)
    {
        if(b[a[i]+r][0]<r)
            {
                for(j=a[i]-r+b[a[i]+r][0]+1;j<=a[i];j++)
                {
                if(b[j-1+r][1]!=1){
                        ans++;
                        b[j-1+r][1]=1;
                for(k=j;k<=t+j;k++){
                    b[k+r][0]++;
                }

                }
            }
        }
    }int u=0;
    for(j=0;j<m;j++){if(b[a[j]+r][0]>=r)u++;}
    if(u==m)printf("%d\n",ans);
    else printf("-1\n");

}
