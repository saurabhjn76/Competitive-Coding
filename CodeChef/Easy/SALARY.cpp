#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf("%c",&n)
# define sl(n)                       scanf("%lld",&n)
# define sf(n)                       scanf("%lf",&n)
# define ss(n)                       scanf("%s",n)

#define REP(i,n) for(int i=0;i<(n);i++)
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
  ll min = INF;
  ll n,j,sum;
  while(t--){
  		sum=0;
  		min =INF;
		sl(n);
		REP(i,n){
			sl(j);
			if(j<min)
				min=j;
			sum+=j;
		}
		printf("%lld\n",sum-n*min); 
		//printf("%lld\n",min );

  }
	
	return 0;
}
	