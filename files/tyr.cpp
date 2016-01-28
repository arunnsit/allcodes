#include<stdio.h>
#include<vector>
using namespace std;
int main(){
int sa[]={5,3,1,0,4,2};
char s[]="banana";	
int n=6,k=0;
    vector<int> lcp(n,0);
    vector<int> rank(n,0);

    for(int i=0; i<n; i++) rank[sa[i]]=i;

    for(int i=0; i<n; i++, k?k--:0)
    {
        if(rank[i]==n-1) {k=0; continue;}
        int j=sa[rank[i]+1];
        while(i+k<n && j+k<n && s[i+k]==s[j+k]) k++;
        lcp[rank[i]]=k;
        printf("lcp of rank%d : %d\n",rank[i],lcp[rank[i]]);
    }
}