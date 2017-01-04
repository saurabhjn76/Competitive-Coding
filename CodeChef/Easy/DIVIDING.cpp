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
  ll i=0;
  for(int k=1;k<=t;k++){
  ll j;
  sl(j);
  i+=j-k;
  }
  if(i==0)
  	printf("YES\n");
  else
  	printf("NO\n");
	
	return 0;
}
	