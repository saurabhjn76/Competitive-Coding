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

int main()
{
  int t;
  cin >> t;
  for(int i=1;i<=t;i++){
  	ll d,n;
  	sl(d);sl(n);
  	double speed,max_speed=0,tp,sp;
  	R(j,n){
  		sf(tp);sf(sp);
  		speed=(d-tp)/sp;
  		if(max_speed<speed){
  			max_speed=speed;
  		}
  	}
  	
  	printf("Case #%d: ",i);
  	printf("%lf\n",d/max_speed );
  }
	
	return 0;
}
	