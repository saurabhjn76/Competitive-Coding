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

int main()
{
  int t;
  cin >> t;
  while(t--){
  ll a,s;
  sl(a);sl(s);
  //P = 4(2l+b)
  //S = 4(l^2) + 2*lb
   double l1,l2;
    l1=(((a/2)+sqrt(a*a/4-6*s))/6);
    l2=(((a/2)-sqrt(a*a/4-6*s))/6);
    double v1,v2;
    v1=l1*l1*(a/4-2*l1);
    v2=l2*l2*(a/4-2*l2);
    //printf("%lf %lf\n",v1,v2 );
    printf("%.2lf\n",max(v2,v1) );
  }
	
	return 0;
}
	