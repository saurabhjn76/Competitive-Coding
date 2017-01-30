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
  int k;s(k);
  if(360%k==0){
  	printf("y ");
  }
  else
  	printf("n ");

  if(360>=k)
  	printf("y ");
  	else
  	printf("n ");
  

  if((k*(k+1))/2<=360)
  	printf("y\n");
  else
  	printf("n\n");

  }
	
	return 0;
}
	