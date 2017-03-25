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
  ll n; sl(n);
  ll a[n];
  R(i,n) sl(a[i]);
  sort(a,a+n);
  int p1;
  R(i,n-1){
  	if(a[i+1]-a[i]!=1){
  		p1=i+1;
  		break;
  	}
  }
  if(p1+1<n){
  	if(a[p1+1]-a[p1]==1){
  		printf("%lld\n",a[p1-1]);
  	}
  	else
  		printf("%lld\n",a[p1]);
  }
  else
  	printf("%lld\n",a[p1]);
  }
	
	return 0;
}
	