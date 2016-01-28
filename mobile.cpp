#include<iostream>
#include<string.h>
using namespace std;
int mobile(char in[100],char a[100][100],int j,int n,char ou[100],int p){
    if(j==n)return 0;
    for(int i=0;a[in[j]-50][i]!='\0';i++){
        ou[p]=a[in[j]-50][i];
        mobile(in,a,j+1,n,ou,p+1);
        cout<<ou<<"\n";
        }
}
int main(){
    char a[100][100]={{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
    char in[100],ou[100];
    cin>>in;int p;
    mobile(in,a,0,strlen(in),ou,0);
}
