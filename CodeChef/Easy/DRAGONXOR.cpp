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

int count_ones(int n){
	if(n==0)
		return 0;
	else
		return 1 +count_ones(n&(n-1));
}

int main()
{
  int t;
  cin >> t;
  while(t--){
  int n,a,b;
 // printf("%d\n",(1 << 2 -1)<<2 );
  s(n);s(a);s(b);
  int ones_a=count_ones(a);int zeroes_a=n-ones_a;
  int ones_b=count_ones(b);int zeroes_b=n-ones_b;
  int answer_ones=min(ones_a,zeroes_b) + min(ones_b,zeroes_a);
  printf("%d\n",((1 << answer_ones)-1) << (n-answer_ones) );
  }
	
	return 0;
}
	