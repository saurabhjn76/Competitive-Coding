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
  int t=1;
 // cin >> t;
  while(t--){
  	int n;
  	s(n);
  	ll a[n];
  	for(int i=0;i<n;i++)
  		sl(a[i]);
  	sort(a,a+n);
  	ll sum=0;
  	for(int i=0;i<n-1;i++){
  		sum+=a[n-2]-a[i];
  	}
  	printf("%lld\n",sum );
  }
	
	return 0;
}
