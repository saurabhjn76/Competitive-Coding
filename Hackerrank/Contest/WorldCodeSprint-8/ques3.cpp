#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007
# define GETCHAR getchar_unlocked
typedef long long ll;
 bool con[100001];
 int lib,road;
inline ll  readllInt() {
    ll  n = 0;
    char c;
    while (1){ 
      c=GETCHAR();
      if(c=='\n'||c==' ') break;
       n = n * 10 + c - '0';
    }
    return n;
}

inline int readInt() {
    int n = 0;
    char c;
    while (1){ 
      c=GETCHAR();
      if(c=='\n'||c==' ') break;
       n = n * 10 + c - '0';
    }
    return n;
}
ll sum=0;
/class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
    void DFSUtil(int v, bool visited[]);  // A function used by DFS
public:
    Graph(int V);   // Constructor
    void addEdge(int v, int w);   // function to add an edge to graph
    void DFS();    // prints DFS traversal of the complete graph
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
 
void Graph::DFSUtil(int v, bool visited[])
{
    // Mark the current node as visited and print it
    visited[v] = true;
    con[v]=true;
    cout << v << " ";
 
    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
        if(!visited[*i])
            DFSUtil(*i, visited);
}
 
// The function to do DFS traversal. It uses recursive DFSUtil()
void Graph::DFS()
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
 
    // Call the recursive helper function to print DFS traversal
    // starting from all vertices one by one
    for (int i = 0; i < V; i++)
        if (visited[i] == false)
            DFSUtil(i, visited);
}
int main()
{
  int t=readInt();
  while(t--){
   int n,m,u,v;
   sum=0;
   cin >> n >> m >> lib >> road;
   
   Graph g(n);
  
   fill_n(con,100001,false);
   for(int i=0;i<m;i++){
   		cin >> u >> v;
   		g.addEdge(u-1,v-1);
   		g.addEdge(v-1,u-1);
   }
   if(road>= lib)
   {
   	printf("%d\n",n*lib );
   	continue;
   }
   for(int i=0;i<n;i++)
   {
   	if(!con[i]){
   		con[i]=true;
   		sum+=lib;
   		g.DFS();
   	}
   }
   printf("%lld\n",sum );

  }
	
	return 0;
}
	