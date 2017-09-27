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
	   ll  a,b,n;
	   sl(a);sl(b);sl(n);
	   if(n%2==0){
	   	printf("%lld\n",max(a,b)/min(a,b));
	   }
	   else{
	   	a=2*a;
	   	printf("%lld\n", ((max(a,b))/min(a,b)) );
	   }
	   	
	  }
		
		return 0;
	}
