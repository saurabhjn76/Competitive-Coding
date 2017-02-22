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
   int n; s(n);
   int a[n]; R(i,n) s(a[i]);
   ll sum=0;
   int j=0;
   R(i,n){
   	if(a[i]==1){
   		if(j==i){
   			j++;
   		}
   		else{
   			sum+=100;
   			j++;
   		}
   	}
   }
   sum+=(n-j)*1100;
   printf("%lld\n",sum);
  }
	
	return 0;
}
	