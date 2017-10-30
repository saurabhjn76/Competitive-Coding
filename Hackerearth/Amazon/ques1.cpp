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
int dp[100000][3]={-1};

int main()
{
  int t;
  cin >> t;
  while(t--){
    int n;
    s(n);
    ll ans=0;
    int a[n][3];

    R(i,n){
    	R(j,3){
    		s(a[i][j]);
    	}
    	
    }
    //printf("%lld\n", min(recurse(0,0,n,a),min(recurse(0,1,n,a),recurse(0,2,n,a))));
    FORD(i,n-2,0){
            a[i][0]+=min(a[i+1][1],a[i+1][2]);
            a[i][1]+=min(a[i+1][0],a[i+1][2]);
            a[i][2]+=min(a[i+1][0],a[i+1][1]);
        }
        ans=min(a[0][0],min(a[0][1],a[0][2]));
        printf("%lld\n",ans );
  }
	
	return 0;
}
