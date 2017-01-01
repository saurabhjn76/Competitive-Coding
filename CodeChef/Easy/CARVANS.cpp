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
  	ll n; sl(n);
  	int i,j,k,count=1,min;
  	s(i);
  	min=i;
  	for(i=0;i<n-1;i++){
  		s(j);
  		//printf("%d\n",min );
  		if(j<=min){
  			min=j;
  			count++;
  		}
  		
  	}
  	printf("%d\n",count);
  }
	
	return 0;
}
	