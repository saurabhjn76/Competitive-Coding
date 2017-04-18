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

# define INF                         LLONG_MAX
# define EPS                         1e-9
# define MOD 1000000007


typedef long long ll;
 
// This class represents a directed graph using 
// adjacency list representation
class Graph
{
    ll V;    // No. of vertices
 
    // In a weighted graph, we need to store vertex 
    // and weight pair for every edge
    list< pair<ll, ll> > *adj;
 
public:
    Graph(ll V);  // Constructor
 
    // function to add an edge to graph
    void addEdge(ll u, ll v, ll w);
 
    // prlls shortest path from s
    void shortestPath(ll s, ll x,ll k);
};
 
// Allocates memory for adjacency list
Graph::Graph(ll V)
{
    this->V = V;
    adj = new list< pair<ll, ll> >[V];
}
 
void Graph::addEdge(ll u, ll v, ll w)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}
 
// Prlls shortest paths from src to all other vertices
void Graph::shortestPath(ll src, ll x,ll k)
{
    // Create a set to store vertices that are being
    // prerocessed
    set< pair<ll, ll> > setds;
 
    // Create a vector for distances and initialize all
    // distances as infinite (INF)
    vector<ll> dist(V, INF);
 
    // Insert source itself in Set and initialize its
    // distance as 0.
    setds.insert(make_pair(0, src));
    dist[src] = 0;
    bool flag=false;
 
    /* Looping till all shortest distance are finalized
       then setds will become empty */
    while (!setds.empty())
    {
        // The first vertex in Set is the minimum distance
        // vertex, extract it from set.
        pair<ll, ll> tmp = *(setds.begin());
        setds.erase(setds.begin());
 
        // vertex label is stored in second of pair (it
        // has to be done this way to keep the vertices
        // sorted distance (distance must be first item
        // in pair)
        ll u = tmp.second;
        if(u <k && !flag){
        	R(v,k){
        		if(v!=u){
        			flag=true;
            	if(dist[v]> dist[u]+x){
            		 if (dist[v] != INF)
                    setds.erase(setds.find(make_pair(dist[v], v)));
 
                // Updating distance of v
                dist[v] = dist[u] + x;
                setds.insert(make_pair(dist[v], v));
            	}
            }
        }
       }
 
        // 'i' is used to get all adjacent vertices of a vertex
        list< pair<ll, ll> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            // Get vertex label and weight of current adjacent
            // of u.
            ll v = (*i).first;
            ll weight = (*i).second;
 
            //  If there is shorter path to v through u.
            if (dist[v] > dist[u] + weight)
            {
                /*  If distance of v is not INF then it must be in
                    our set, so removing it and inserting again
                    with updated less distance.  
                    Note : We extract only those vertices from Set
                    for which distance is finalized. So for them, 
                    we would never reach here.  */
                if (dist[v] != INF)
                    setds.erase(setds.find(make_pair(dist[v], v)));
 
                // Updating distance of v
                dist[v] = dist[u] + weight;
                setds.insert(make_pair(dist[v], v));
            }
        }
    }
 
    // Prll shortest distances stored in dist[]
    //prllf("Vertex   Distance from Source\n");
    for (ll i = 0; i < V; ++i)
        printf("%lld ",dist[i]);
    printf("\n");
}

int main()
{
  int t;
  cin >> t;
  while(t--){
  	ll V,k,m,s;
  	ll aa,bb,xx;
  	ll x;
  	sl(V);sl(k);sl(x);sl(m);sl(s);
  	//struct Graph* graph = createGraph(V);
  	Graph g(V);
  	R(i,m){
  		sl(aa);sl(bb);sl(xx); 
  		g.addEdge(aa-1,bb-1,xx);
  		g.addEdge(bb-1,aa-1,xx);
  	}
  	g.shortestPath(s-1,x,k);

  }
	
	return 0;
}
	