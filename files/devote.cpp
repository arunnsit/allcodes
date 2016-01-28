#include<stdio.h>
#include<algorithm>
using namespace std;
int sol=0,cas=0;
int vote(int n,int prev,int a[100],int c){
    if(c==n){
        int ma=0,o=0;
        for(int i=0;i<n;i++){
                ma=std::max(ma,a[i]);
        }
        for(int i=0;i<n;i++){
                if(a[i]==ma)o++;
        }
        cas++;
        a[prev]--;
        sol+=o;
        return sol;
    }
    for(int i=0;i<n;i++){
            if(i!=prev){
        a[i]++;
        vote(n,i,a,c+1);
    }
}
a[prev]--;
return sol;
}
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){sol=0;cas=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            int a[100]={0};
        a[i]=1;
            vote(n,i,a,1);
        }
        printf("%f\n",(float)sol/cas);
    }
}
