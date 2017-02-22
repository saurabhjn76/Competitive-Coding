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
  int t=1;
  //cin >> t;
  while(t--){
  	ll l,r,n;
  	sl(n);sl(l);sl(r);
  	ll a[i];
  	R(i,n) sl(a[i]);
  	sort(a,a+n);
  	ll min_dif =a[1]-a[0];
  	R(i,n-1){
  		if(a[i+1]-a[i]< min_dif){
  			min_dif=a[i+1]-a[i];
  		}
  	}
  		
  }
	
	return 0;
}
	