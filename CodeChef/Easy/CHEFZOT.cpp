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
  int t=1;
  //cin >> t;
  while(t--){
  	int n; s(n);int a[n];
  	R(i,n){
  		s(a[i]);
  	}
  	int max_so_far=0;
  	int running=0;
  	R(i,n){
  		if(a[i]!=0){
  			if(++running>max_so_far)
  				max_so_far=running;
  		}
  		else
  			running =0;
  	}
  	printf("%d\n",max_so_far );
  }
	
	return 0;
}
	