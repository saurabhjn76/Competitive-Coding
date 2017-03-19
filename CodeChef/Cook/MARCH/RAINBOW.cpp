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
   int n,aa;
   s(n);

   if(n<3){
   	R(i,n){
   		R(j,n){
   			s(aa);
   		}
   	}
   	printf("0\n");

   	continue;
   }
   int a[n][n];
   Map v[n];
   int color[n];
   fill_n(color,n,-1);
   R(i,n){
   	bool check[(n*(n+1))/2];
   	fill_n(check,(n*(n+1))/2,false);
   	R(j,n){
   		s(a[i][j]);
   		if(!check[a[i][j]-1]){
   			check[a[i][j]-1]=true;
   			color[i]++;
   		}
   	}
   	v[i].index=i;
   	v[i].pop=color[i];
   }
   sort(v,v+n,&ComparePop);
  /* R(i,n){
   	printf("%lld\n",v[i].index+1 );
   }*/
   // check for 3
   vector<int> intresting;
   intresting.push_back(v[0].index);
   intresting.push_back(v[1].index);
   bool vert[n];
   fill_n(vert,n,false);
   vert[v[0].index]=true;
   vert[v[1].index]=true;
   for(int i=2;i<n;i++){
   	if(!vert[v[i].index]){
   	int jk=a[v[i].index][intresting[0]];
   	R(k,intresting.size()){
   		if(a[v[i].index][intresting[k]]!=jk){
   			vert[v[i].index]=true;
   			intresting.push_back(v[i].index);
   			i=1;
   			break;
   		}
   	}
   }
   }
   printf("%ld\n",intresting.size()<3?0:intresting.size());

  }
	
	return 0;
}
	