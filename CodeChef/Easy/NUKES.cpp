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
  //cin >> t;
  while(t--){
  	ll n,a,k,j=0;
  	cin >> n >> a >> k;
  	ll aa[k+1];
  	fill_n(aa,k,0);
  	while(n>0 ){
  		aa[j]=n%(a+1);
  		n/=(a+1);
  		j++;
      if(j==k)
        break;
  	}
  	for(ll i=0;i<k;i++){
  		printf("%lld ",aa[i] );
  	}
  	printf("\n");
  }
	
	return 0;
}
	