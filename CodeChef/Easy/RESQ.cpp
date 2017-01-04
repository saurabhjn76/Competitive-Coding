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
  ll n;
  sl(n);
  ll min=MOD;
 ll square_root = (ll) sqrt(n) + 1;
for (ll i = 1; i < square_root; i++) { 
    if (n%i == 0 && i*i!=n)
       {
       	if(labs(n/i - i)<min)
       		min=labs(n/i-i);
       }
    if (n % i == 0 && i*i==n){
        min=0;
    }
}
printf("%lld\n",min );
  }
	
	return 0;
}
	