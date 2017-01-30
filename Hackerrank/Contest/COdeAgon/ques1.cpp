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

int main()
{
  int t;
 
  ll fx,fy;
  sl(fx);sl(fy);
   cin >> t;
   ll sumx=0,sumy=0,x,y;
  while(t--){
  	sl(x);sl(y);
  	sumx+=x;
  	sumy+=y;
  }
  printf("%lld %lld\n",fx-sumx,fy-sumy);
	
	return 0;
}
