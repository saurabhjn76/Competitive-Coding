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
  int n,k;
  s(n);s(k); int used=0;
  bool sad=false, all =false, some=false;
  bool a[k];
  fill_n(a,k,false);
  int temp,m;
  R(i,n){
  	used=0;
  	s(m);
  	R(g,m){
  		s(temp);
		if(!a[temp-1]){	
		used=1;
		a[temp-1]=true;
  		}
  }
  	if(used==0){
  		some=true;
  	}
  }
  R(i,k){
  	if(!a[i]){
  		sad=true;
  		break;
  	}
  	else if(i==k-1){
  		all=true;
  	}
  }
  
  if(sad)
  	printf("sad\n");
  else if(some && all)
  	printf("some\n");
  else
  	printf("all\n");
  }

	
	return 0;
}
	