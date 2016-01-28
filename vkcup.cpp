#include<stdio.h>
#include<unordered_set>
#include<unordered_map>
void tolow(char a[100]){
    int i;
    for(i=0;a[i]!='\0';i++){if(a[i]>=65&&a[i]<=90)a[i]=a[i]+32;}
}
int main(){
    int n,m=0;char a[100],b[100],c[100];
    scanf("%d",&n);
    std::unordered_map<char [100],int> map1;
    while(n--){
        scanf("%s%s%s",&a,&c,&b);
        map1["b"]=1;
        tolow(a);
        tolow(b);
        printf("%s%s\n",a,b);
        map1[a]=map1[b]+1;
        printf("%d %d\n",map1[a],map1[b]);
        if(map1[a]>m)m=map1[a];
    }
    printf("%d\n",m);
}
