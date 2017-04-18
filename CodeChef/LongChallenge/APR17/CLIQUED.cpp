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
 typedef struct{
	int b;
	ll x;
}node;
// A utility function to find the vertex with minimum distance value, from
// the set of vertices not yet included in shortest path tree
ll minDistance(ll dist[], bool sptSet[],int V)
{
   // Initialize min value
   ll min = INF, min_index;
  
   for (int v = 0; v < V; v++)
     if (sptSet[v] == false && dist[v] <= min)
         min = dist[v], min_index = v;
  
   return min_index;
}
  
// A utility function to print the constructed distance array
int printSolution(ll dist[], int n, int V)
{
  // printf("Vertex   Distance from Source\n");
   for (int i = 0; i < V; i++)
      printf("%lld ", dist[i]);
  printf("\n");
}
  
// Funtion that implements Dijkstra's single source shortest path algorithm
// for a graph represented using adjacency matrix representation
void dijkstra(int V,vector<node> v[100001],ll x, int src,int k){
     ll dist[V];     // The output array.  dist[i] will hold the shortest
                      // distance from src to i
  
     bool sptSet[V]; // sptSet[i] will true if vertex i is included in shortest
                     // path tree or shortest distance from src to i is finalized
  
     // Initialize all distances as INFINITE and stpSet[] as false
     for (int i = 0; i < V; i++)
        dist[i] = INF, sptSet[i] = false;
  
     // Distance of source vertex from itself is always 0
     dist[src] = 0;
     ll c;
  
     // Find shortest path for all vertices
     for (int count = 0; count < V-1; count++)
     {
       // Pick the minimum distance vertex from the set of vertices not
       // yet processed. u is always equal to src in first iteration.
       ll u = minDistance(dist, sptSet,V);
  
       // Mark the picked vertex as processed
       sptSet[u] = true;
  
       // Update dist value of the adjacent vertices of the picked vertex.
       for (int xyz = 0; xyz < V; xyz++){
  
         // Update dist[v] only if is not in sptSet, there is an edge from 
         // u to v, and total weight of path from src to  v through u is 
         // smaller than current value of dist[v]
       	// c= graph[u][xyz]; 
       	c=0;
       	if(u<k && xyz<k)
       		c=x;
       	else
       		for(int i=0;i<v[u].size();i++){
       			if(v[u][i].b==xyz){
       				c=v[u][i].x;
       				break;
       			}
       		}
         if (!sptSet[xyz] && c && dist[u] != INT_MAX 
                                       && dist[u]+c < dist[xyz])
            dist[xyz] = dist[u] + c;
     }
 }
  
     // print the constructed distance array
     printSolution(dist, V,V);
}


int main()
{
  int t;
  int V;
  cin >> t;
  while(t--){
  	int V,k,m,s;
  	int aa,bb,xx;
  	ll x;
  	s(V);s(k);sl(x);s(m);s(s);
  	vector<node> v[100001];
  	node newnode;
  	R(i,m){
  		s(aa);s(bb);s(xx); 
  		newnode.b=bb-1;
  		newnode.x=xx;
  		v[aa-1].push_back(newnode);
  		//printf("%d\n",v[aa-1][0].b);
  		newnode.b=aa-1;
  		newnode.x=xx;
  		v[bb-1].push_back(newnode);
  	}

    dijkstra(V,v,x,s-1,k);
  
  }
	
	return 0;
}
	