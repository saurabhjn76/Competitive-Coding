#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf("%c",&n)
# define sl(n)                       scanf("%lld",&n)
# define sf(n)                       scanf("%lf",&n)
# define ss(n)                       scanf("%s",n)

#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

# define INF                         (int)1e9
# define EPS                         1e-9
# define MOD 1000000007


typedef long long ll;

int main()
{
  int t;
  ll n; sl(n);
  cin >> t;
  while(t--){
  	ll m;
  	sl(m);
  	if(m<=3*n && m>n)
  	printf("%lld\n",min(abs(m-(n+1)),abs(m-3*n)+1));
  else
  	printf("0\n");
  }
	
	return 0;
}
	