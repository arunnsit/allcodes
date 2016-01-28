#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <set>
//#include <bits/stdc++.h>
#define INF 100000000
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
    int n,m,x,y,a,b,u,tar;
    long long int d[3008];
    cin>>n>>m;
    vector<int> adj[3008],w1[3008],w2[3008];
    while(m--)
        {
        cin>>x>>y>>a>>b;
        adj[x].push_back(y);
        adj[y].push_back(x);
        w1[x].push_back(a);
        w1[y].push_back(a);
        w2[x].push_back(b);
        w2[y].push_back(b);
    }
        cin>>u>>tar;
    set<pair<int,pair<int,int> > > q;
    for(int i=0;i<=n;i++)
    	d[i]=INF;
    d[u]=0;
    q.insert(make_pair(d[u],make_pair(u,0)));
    int curnode,curw,curmark;    
    while(!q.empty())
        {
        curw=(*q.begin()).first;
        curnode=(*q.begin()).second.first;
        curmark=(*q.begin()).second.second;
        q.erase(q.find(make_pair(curw,make_pair(curnode,curmark))));
        if(d[curnode]==curw)
        {
            for(int i=0;i<adj[curnode].size();i++)
    		{
                int child=adj[curnode][i];
                if(curmark)
                {
                    if(d[child]>d[curnode]+w1[curnode][i])
                    {
                        d[child]=d[curnode]+w1[curnode][i];
                        q.insert(make_pair(d[child],make_pair(child,1)));
                    }
                }
                else
                {
                    if(d[child]>d[curnode]+w1[curnode][i])
                    {
                        d[child]=d[curnode]+w1[curnode][i];
                        q.insert(make_pair(d[child],make_pair(child,0)));
                    }
                    if(d[child]>d[curnode]+w2[curnode][i])
                    {
                        d[child]=d[curnode]+w2[curnode][i];
                        q.insert(make_pair(d[child],make_pair(child,1)));
                    }
                }
            }
        }
    }
    cout<<d[tar]<<endl;
    }
    return 0;
}
