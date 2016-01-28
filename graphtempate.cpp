#include<iostream>
#include <list>
using namespace std;
 
class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
    void DFSUtil(int v, bool visited[]);  // A function used by DFS
public:
    Graph(int V);   // Constructor
    void addEdge(int v, int w);   // function to add an edge to graph
    void DFS();
    void DFS2();     // prints DFS traversal of the complete graph
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

int stack[100009],top=0,swit=0;
int va[100005]={0},tp=0;
int value[100005]={0};
void Graph::DFSUtil(int v, bool visited[])
{
    // Mark the current node as visited and print it
    visited[v] = true;
    va[tp++]=v;
 
    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
        if(!visited[*i])
            DFSUtil(*i, visited);
    if(!swit)stack[top++]=v;    
}
// The function to do DFS traversal. It uses recursive DFSUtil()
void Graph::DFS()
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
         visited[i] = false;
 
    // Call the recursive helper function to print DFS traversal
    // starting from all vertices one by one
    for(int i = 0; i < V; i++)
        if(visited[i] == false)
            DFSUtil(i, visited);
}
long long int ways=1,total=0;
void Graph::DFS2()
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
         visited[i] = false;
    int j;
    // Call the recursive helper function to print DFS traversal
    // starting from all vertices one by one
    for(int i = top-1; i >=0; i--){
        tp=0;
        if(visited[stack[i]] == false)
            {DFSUtil(stack[i], visited);
        int x=value[va[0]],y=0;
        for(j=0;j<tp;j++){
            x=x>value[va[j]]?value[va[j]]:x;
           //cout<<va[j]<<" ";
        }
        //cout<<"x:"<<x<<endl;
        for(j=0;j<tp;j++)if(value[va[j]]==x)y++;
        ways=(ways*y)%1000000007;
        total+=x;}    
    }
}
int main()
{
    // Create a graph given in the above diagram
    int n,i,j,m,x,y;
    cin>>n;
    for(i=0;i<n;i++)cin>>value[i];
    Graph g(n);
    Graph gt(n);
    cin>>m;
    for(j=0;j<m;j++){
    cin>>x>>y;
    x--;
    y--;    
    g.addEdge(x, y);
    gt.addEdge(y, x);
    }
    g.DFS();
    swit=1;
    gt.DFS2();
    cout<<total<<" "<<ways<<"\n";
    return 0;
}