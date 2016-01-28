#include<stdio.h>
#include<unordered_map>
int main(){
    int n,b,sol=0;char a[30];
    scanf("%d",&n);
    std::unordered_map<std::string,int>map1;
    while(n--){
        scanf("%s %d",&a,&b);
        if(map1[a]==0)map1[a]=-1;
        else {map1[a]=-1;sol--;}
        while(b--){
            scanf("%s",&a);
            if(map1[a]!=-1){
                if(map1[a]==0){map1[a]=1;sol++;}
            }
        }
    }
    printf("%d\n",sol);
}
