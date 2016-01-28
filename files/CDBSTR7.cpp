#include<stdio.h>
#include<string.h>
char a[50005],b[50005];
int main(){
    int t,i,j;
    scanf("%d",&t);
    while(t){int c[299]={0},d[299]={0};
            scanf("%s %s",&a,&b);
                    for(i=0;a[i]!='\0';i++){c[a[i]-97]++;}
                    for(i=0;b[i]!='\0';i++){c[b[i]-97]--;}
                    for(i=0;i<=26;i++){if(c[i]!=0)break;}
                    if(i==27){printf("YES\n");}
                    else printf("NO\n");



    t--;}
}
