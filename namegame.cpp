#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
#include<stdio.h>

int main()
{int t;
scanf("%d",&t);
while(t){
        int ans=1,l,j,c;
    string s;
    map<string,int> m;
    cin >> s;
    vector<string> v;
    for(int i = 0; i < s.size();i++)
    {
        m[s.substr(i,s.size()-i)] = i;
        v.push_back(s.substr(i,s.size()-i));
    }
    sort(v.begin(),v.end());
    for(int i = 1; i < v.size();i++)
    {c=0;
        l=std::min(v[i].size(),v[i-1].size());
        for(j=0;j<=l;j++){if(v[i][j]==v[i-1][j])c++;else break;}
        ans=v[i].size()+ans-c;
    }
    printf("%d\n",ans);t--;}
    return 0;
}
