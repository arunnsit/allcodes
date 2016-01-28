#include<stdio.h>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char a[1002];
        int c=0,i,j;
        scanf("%s",&a);
        unordered_map<string,int>map1;
        for(i=0;a[i]!='\0';i++){
            char p[1002];
            int k=0;
            for(j=i;a[j]!='\0';j++){
            p[k]=a[j];
            k++;
            p[k]='\0';
            if(!map1[p])c++;
            map1[p]++;
            }
        }
        printf("%d\n",c);
    }
}
