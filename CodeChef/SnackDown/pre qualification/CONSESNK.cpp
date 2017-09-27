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
  ll n,l,p,q;
  sl(n);sl(l);sl(p);sl(q);
  ll a[n];
  R(i,n){
  	sl(a[i]);
  }
  sort(a,a+n);
  ll b[n],c[n];
  fill_n(b,n,0);
  fill_n(c,n,0);
  FOR(i,1,n-1){
  	b[i]=a[0]+i*l-a[i]; // right-+,l-minus
  }
  FORD(i,n-2,0){
  	c[i]=a[n-1]-(n-1-i)*l-a[i];
  }
  /*R(i,n){
  	printf("%lld\n",b[i] );
  }
  R(i,n){
  	printf("%lld\n",c[i] );
  }*/
  ll start=0;
  if(p>=a[0])
  	start=p;
  else if(a[0]+n*l<=q){
  	start=a[0];
  }
  else{
  	start=q-n*l;
  }
  R(i,n){
  	b[i]+=start-a[0];
  }
  ll end=0;
  if(q<=a[n-1]+l){
  	end=q;
  }
  else if(a[n-1]-(n-1)*l>=p){
  	end=a[n-1]+l;
  }
  else{
  	end=p+n*l;
  }
  FORD(i,n-1,0){
  	c[i]=end-a[n-1]-l;
  }
  ll sum1=0,sum2=0;
  R(i,n){
  	sum1+=labs(b[i]);
  	sum2+=labs(c[i]);
  }
  printf("%lld\n",min(sum1,sum2) );

  }
	
	return 0;
}
	