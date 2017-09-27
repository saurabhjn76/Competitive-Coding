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
  int i; char temp;
  while(t--){
  	i=0;
   ll a[101];
   do{
        scanf("%lld%c", &a[i], &temp); 
        i++; 
        } while(temp!= '\n');
  sort(a,a+i);
  if(a[i-1]==i-1){
  	printf("%lld\n",a[i-2]);
  }
  else {
  	printf("%lld\n",a[i-1] );
  }

  }
	
	return 0;
}
	