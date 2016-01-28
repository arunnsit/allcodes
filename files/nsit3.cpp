#include <stdio.h>
#include <limits.h>
#include<stdbool.h>
#include<unordered_set>
#include<string.h>
using namespace std;
   long long int  graph[1100][1100] ={0};
      char g[1100][20],s1[110],s2[110];
long long int  minDistance(long long int  dist[], bool sptSet[] , long long int  n)
{

   long long int  min = INT_MAX, min_index,v;

   for (v = 0; v < n; v++)
     if (sptSet[v] == false && dist[v] <= min)
         min = dist[v], min_index = v;

   return min_index;
}


long long int  shortestPath(long long int  src , long long int  dest , long long int  n)
{
     long long int  dist[n];
     long long int  i,count,v;
     bool sptSet[n];
     for (i = 0; i < n; i++)
        dist[i] = INT_MAX, sptSet[i] = false;

     dist[src] = 0;

     while(!sptSet[dest])
     {
       long long int  u = minDistance(dist, sptSet ,n);
       sptSet[u] = true;

       for (v = 0; v < n; v++)
         if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
                                       && dist[u]+graph[u][v] < dist[v])
            dist[v] = dist[u] + graph[u][v];
     }
     return dist[dest];
}
int main()
{

   long long int  n,m,k,a,b,c,q,u,v,i,t,l,j;
   scanf("%lld",&t);

   while(t){

   scanf("%lld%lld",&n,&l);
   for(i=1;i<=n;i++){
       scanf("%s",g[i]);
   }
   for(i=0;i<n+1;i++)
    for(j=0;j<n+1;j++)graph[i][j]=0;
   scanf("%lld",&m);
   for(i=1;i<=m;i++)
   {
       scanf("%lld%lld%lld",&a,&b,&c);
       graph[a-1][b-1] = c;
       graph[b-1][a-1] = c;
   }
   scanf("%s %s",&s1,&s2);
   for(i=1;i<=n;i++){
        if(!strcmp(s1,g[i]))break;
   }
   u=i;
   for(i=1;i<=n;i++){
        if(!strcmp(s2,g[i]))break;
   }
   v=i;

       long long int  ans;
       ans = shortestPath(u-1,v-1,n);
       if(ans<=l)
       {
           printf("%lld\n",ans);
       }
       else
       {
           printf("Stay!\n");
       }
   t--;}

    return 0;
}
