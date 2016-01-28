#include<stdio.h>
#include<unordered_map>
void dfs(int x){

}
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        std::unordered_map<std::unordered_map<int ,int >,int>ma;
        scanf("%d",&n);
        int ed=n-1,p,q;
        while(n--){
            scanf("%d %d",&p,&q);
            ma[p][q]=1;
        }
        


    }
}