#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf("%c",&n)
# define sl(n)                       scanf("%lld",&n)
# define sf(n)                       scanf("%lf",&n)
# define ss(n)                       scanf("%s",n)

# define INF                         (int)1e9
# define EPS                         1e-9
# define MOD 1000000007


typedef long long ll;
typedef struct Map
{
	ll index;
	ll pop;
}Map;
bool ComparePop (const Map& l,  const Map& r)
{
  return l.pop > r.pop;
}
int main()
{
  int t;
  cin >> t;
  while(t--){
  ll n;
  sl(n); Map v[n];
  for(ll i=0;i<n;i++){
  	v[i].index=i+1;
  	sl(v[i].pop);
  }
  sort(v,v+n,&ComparePop);
  int u,vv;
  set <int> sett[n+1]; 
  for(int i=0;i<n-1;i++){
  	s(u);s(vv);
  	sett[u].insert(u);
  	sett[vv].insert(vv);
  	sett[u].insert(vv);
  	sett[vv].insert(u);
  }
  /*for(set<int>::iterator it =sett[4].begin();it!=sett[4].end();it++)
  	printf("%d ",*it );
  printf("\n")*/;
  for(int i=1;i<n+1;i++){
  	for(int j=0;j<n;j++){
  		if((sett[i].find(v[j].index)==sett[i].end())){
  			printf("%lld ",v[j].index);
  			break;
  		}
  		else if(j==n-1)
  			printf("0 ");

  	}
  }
  printf("\n");
  /*for(ll i=0;i<n;i++)
  	printf("%lld\n",v[i].index);*/

  }
	
	return 0;
}
	