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
// series  0 1 3 6 7 9 12 13 15 18 
int main()
{
  int t=1;
  //cin >> t;
  while(t--){
   ll a;
   sl(a);
   if(a%6==1 || a%6 ==3 || a%6==0)
   	printf("yes\n");
   else
   	printf("no\n");
  }
	
	return 0;
}
	