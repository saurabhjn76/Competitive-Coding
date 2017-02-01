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
  while(t--){
  int n;s(n);
  int a[n];
  REP(i,n){
  	s(a[i]);
  }
  sort(a,a+n,greater<int>());
  ll sum=0;
  REP(i,n){
  	//printf("%d ",a[i] );
  	if(i%4==0 || i%4==1){
  		sum+=a[i];
  	}
  }
  printf("%lld\n",sum );
  }
	
	return 0;
}
	