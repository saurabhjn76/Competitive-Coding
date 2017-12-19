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
    ll n,k,m;
    sl(n);sl(k);sl(m);
    string s;
    cin >> s;
    ll count=0, ans=0;
    for(int i=0;i<n;i+=k){
    	if(s[i]=='1')
    		ans+=2;
    }
    printf("%lld\n",m-ans );
  }
	
	return 0;
}