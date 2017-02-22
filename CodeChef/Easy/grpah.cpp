#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf("%c",&n)
# define sl(n)                       scanf("%lld",&n)
# define sf(n)                       scanf("%lf",&n)
# define ss(n)                       scanf("%s",n)

#define R(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

# define INF                         (int)1e9
# define EPS                         1e-9
# define MOD 1000000007


typedef long long ll;
ll ans=0;
vector <int> vv;
bool *special;
int coun=0;

// from geek for geek
class Graph
{
    int V;    // No. of vertices
 
    // Pointer to an array containing adjacency lists
    list<int> *adj;
 
    // A function used by DFS
    void DFSUtil(int v, bool visited[]);
public:
    Graph(int V);   // Constructor
    void addEdge(int v, int w);
    void connectedComponents();
};
 
// Method to print connected components in an
// undirected graph
void Graph::connectedComponents()
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for(int v = 0; v < V; v++)
        visited[v] = false;
 
    for (int v=0; v<V; v++)
    {
        if (visited[v] == false)
        {
            // print all reachable vertices
            // from v
            DFSUtil(v, visited);
 			for(int kk=0;kk<vv.size();kk++){
 					if(special[vv[kk]])
 						coun++;
 			}
 			ans+=coun*vv.size();
           // cout << "\n";
            vv.clear();
            coun=0;
        }
    }
}
 
void Graph::DFSUtil(int v, bool visited[])
{
    // Mark the current node as visited and print it
    visited[v] = true;
    vv.push_back(v);
   // cout << v << " ";
 
    // Recur for all the vertices
    // adjacent to this vertex
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
        if(!visited[*i])
            DFSUtil(*i, visited);
}
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
// method to add an undirected edge
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}
 
// Drive program to test above
int main()
{

	int n,m,k,j;
	s(n);s(m);s(k);
	special =(bool*)calloc(m,sizeof(bool));
	fill_n(special,m,false);
	R(i,m){
		s(j); special[j-1]=true;
	}
    // Create a graph given in the above diagram
    Graph g(n);
    int u,v; // 5 vertices numbered from 0 to 4
    R(i,k){
    	s(u);s(v);
    	g.addEdge(u-1,v-1);
    	//g.addEdge(v-1,u-1);
    }

    /*g.addEdge(1, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 4);*/
 
   // cout << "Following are connected components \n";
    g.connectedComponents();
    printf("%lld\n",ans );
 
    return 0;
}