#include "bits/stdc++.h"
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
  FAST;
  int t;
  cin >> t;
  while(t--){
  ll n,m;sl(n);sl(m); ll a[n],sum=0;
  R(i,n) sl(a[i]);
  sort(a,a+n,greater<ll>());
  R(i,n){
  	sum+=a[i];
  	if(sum>=m){
  		printf("%d\n",i+1);
  		break;
  	}
  }
  if(sum<m)
  	printf("-1\n");
  }
	
	return 0;
}
	
