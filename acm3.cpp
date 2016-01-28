#include<stdio.h>
#include<math.h>
#include<unordered_map>
using namespace std;
int main(){
    int t,n,c,p,i;char a[40];
    scanf("%d",&t);
    while(t--){
            unordered_map<string,int>map1;
          scanf("%d",&n);
          p=0;
          for(i=0;i<n;i++){
            scanf("%s",&a);
            if(map1[a]){p--;map1[a]=0;}
            else{map1[a]=1;p++;}
          }
          printf("%d\n",p);
    }
}
