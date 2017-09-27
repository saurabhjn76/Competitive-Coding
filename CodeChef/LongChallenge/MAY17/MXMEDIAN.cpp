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
  //printf("%d\n",t );
  while(t--){
  	ll n;
  	sl(n);
  	ll a[2*n];
  	R(i,2*n){
  		sl(a[i]);
  	}
  	sort(a,a+2*n);
  	printf("%lld\n",a[2*n-n/2-1]);
  	R(i,n){
  			printf("%lld ",a[i]);
  			printf("%lld ",a[2*n-i-1]);
  	}
  	printf("\n");
  }
	
	return 0;
}
	