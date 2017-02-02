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

int gcf(int a, int b)
{
    if (a == 0)
        return b;
    return gcf(b%a, a);
} 

int main()
{
  int t;
  cin >> t;
  while(t--){
  int n;s(n);int a[n];R(i,n){s(a[i]);} int gc=gcf(a[0],a[1]);
  R(i,n-1){
  	gc=gcf(gc,a[i+1]);
  }
  if(gc==1)
  printf("%d\n",n);
  else
  printf("-1\n"); 
  }
	
	return 0;
}
