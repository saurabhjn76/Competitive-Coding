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
  cin >> t;
  while(t--){
  ll c,d,l;
  	sl(c);sl(d);sl(l);
  	ll total_cats=0;
  	if(l%4!=0)
  		printf("no\n");
  	else{
  	total_cats=(c-((l-4*d)/4));
  //	printf("%lld\n",total_cats );
  //	printf("%lld %lld %lld\n",total_cats,2*d,c );
  	if(total_cats<=c && total_cats<=2*d  && total_cats>=0){
  		printf("yes\n");

  	}
  	else
  		printf("no\n");
  		}
  }
	
	return 0;
}
	