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
  while(t--){
    long long int easy=0,hard=0;
    long long int n,p;
    sl(n); sl(p);
    ll a;
    R(i,n){
    	sl(a);
    	if(a>=p/2){
    		easy++;
    	} else if(a<=p/10){
    		hard++;
    	}
    }
    if(easy==1 && hard ==2){
    	printf("yes\n");
    } else {
    	printf("no\n");
    }

  }
	
	return 0;
}