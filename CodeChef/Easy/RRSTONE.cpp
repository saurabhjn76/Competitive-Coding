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
  int t=1;
  //cin >> t;
  while(t--){
  	int n,k;
  	s(n); s(k);
  	ll a[n],b[n],c[n];
  	ll minn=INF; ll maxx= - INF;
  	R(i,n) { sl(a[i]); if(a[i]>maxx) maxx=a[i]; if(a[i]<minn) minn=a[i]; }
  	R(i,n) { b[i]=maxx-a[i];}
  	R(i,n) { c[i]=maxx-minn-b[i];}
  	if(k==0){
  		R(i,n) printf("%lld ",a[i]); printf("\n");
  	}
  	else if(k%2==0){
  		R(i,n) printf("%lld ",c[i]); printf("\n");
  	}
  	else{
  		R(i,n) printf("%lld ",b[i] ); printf("\n");
  	}
  }
	return 0;
}
	