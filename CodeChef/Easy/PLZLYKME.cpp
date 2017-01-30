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
  cin >> t;
  double l,d,s,c;
  while(t--){
  // the formula evaaluates to s*(1+c)^(d-1)
  	sf(l);sf(d);sf(s);sf(c);
  	s=s*pow(1+c,d-1);
  	if(s>=l)
  		printf("ALIVE AND KICKING\n");
  	else
  		printf("DEAD AND ROTTING\n");

  }
	
	return 0;
}
