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
	ll x;
	ll y;
}Map;

bool ComparePop (const Map& l,  const Map& r)
{
	if(l.x==r.x)
		return l.y > r.y;
  return l.x < r.x;
}

double distance (ll x, ll y, ll x1, ll y1){
	return sqrt(pow(x-x1,2) + pow(y-y1,2));
}


int main()
{
  int t;
  cin >> t;
  while(t--){
  		int n;
  		s(n);
  		Map a[n];
  		R(i,n) { sl(a[i].x);sl(a[i].y);}
  		sort(a,a+n,&ComparePop);
  		//R(i,n) { printf("%lld %lld\n",a[i].x, a[i].y );}
  		double dist=0;
  		R(i,n-1){
  			dist+=distance(a[i].x,a[i].y,a[i+1].x,a[i+1].y);
  		}
  		printf("%0.2lf\n",dist );

  }
	
	return 0;
}
	