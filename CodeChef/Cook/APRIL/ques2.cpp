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
  int a,b;
  s(a);s(b);
  for(int i=1;;i++){
  	if(i%2==1){
  		a-=i;
  		if(a<0){
  			printf("Bob\n");
  			break;
  		}
  	}
  	else{
  		b-=i;
  		if(b<0){
  			printf("Limak\n");
  			break;
  		}
  	}
  }
  }
	
	return 0;
}
	