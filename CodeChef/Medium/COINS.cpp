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
ll a[100000]={0};

ll calc(ll n){
	ll c;
	if(n==0)
		return 0;
	if( n<100000 && a[n]!=0 )
		return a[n];
	else{
		c=max(n,calc(n/2)+calc(n/3)+calc(n/4));
		if(n<100000)
			a[n]=c;
		return c;
	}
}

int main()
{
  int t;
  ll n;
  //cin >> t;
  while(sl(n)>0){
  	//printf("%lld\n",n );
  	printf("%lld\n",calc(n));
  }
	
	return 0;
}
	