#include<iostream>
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
# define MAX 5001
int mod=1000000007;
struct node{
    char ch;
    int count=0;
    node *c[26];
};
void nullify(node *a){
    a->count=0;
}
int main(){
    int t;
    char a[6000];
    scanf("%d",&t);
    while(t--){
    int i=0;
    long long int triangle[2][MAX + 1]={0};
    int n=0,q=0;
    scanf("%d %d",&n,&q);
    node *start=new node;
    nullify(start);
    scanf("%s",&a);
    node *surf=new node;
    nullify(surf);
    int maxi=0,j=0;
    int map1[10000]={0};
    for(j=0;a[j]!='\0';j++){
        surf=start;
    for(i=j;a[i]!='\0';i++){
        if(surf->c[a[i]-'a']==NULL){
            node *temp=new node;
            temp->count=0;
            surf->c[a[i]-'a']=temp;
        }
        surf->c[a[i]-'a']->ch=a[i];
        surf->c[a[i]-'a']->count++;
        map1[surf->c[a[i]-'a']->count-1]--;
        map1[surf->c[a[i]-'a']->count]++;
        maxi=maxi>surf->c[a[i]-'a']->count?maxi:surf->c[a[i]-'a']->count;
        //printf("%d\n",maxi);
        surf=surf->c[a[i]-'a'];
    }
    }
        triangle[0][0] = 1;
        long long int s=0,p=0;
         int f[6000]={0},x,y;
        for(i=1;i<=maxi;i++){
                    x=i;
                    while(x>=2)x=x-2;
                    y=abs(x-1);
                    triangle[x][0] = 1;
                    for(j=1;j<=i;j++){
                    p=triangle[y][j - 1] + triangle[y][j];
                    while(p>=mod)p=p-mod;
                    //printf("%dC%d:%d\n",i,j,triangle[i][j]);
                    triangle[x][j]=p;
                        p=(f[j]+map1[i]*triangle[x][j]);
                        while(p>mod)p=p-mod;
                        f[j]=p;
                    }
                }

                int r;
         while(q--){
                     scanf("%d",&r);
                     if(r<=maxi)
                     printf("%d\n",f[r]);
                     else printf("0\n");
         }
         delete(start);


}
}
