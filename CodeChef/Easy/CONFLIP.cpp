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
  ll g,i,n,q;
  sl(g);
  while(g--){
  	sl(i);sl(n);sl(q);
  		if(n%2==0){
  			printf("%lld\n",n/2 );
  		}
  		else
  		{
  			if(i!=q){
  				printf("%lld\n",(n+1)/2 );
  			}
  			else
  				printf("%lld\n",n/2 );
  		}
  }
  
  }
	
	return 0;
}
	