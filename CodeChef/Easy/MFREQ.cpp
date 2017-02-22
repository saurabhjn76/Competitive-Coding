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

ll min(ll a, ll b){
	return a<b ? a: b;
}
ll max(ll a, ll b){
	return a>b ? a: b;
}
int main()
{
  int t=1;
//  cin >> t;
  while(t--){
  		int n,m;
  		s(n);s(m);
  		ll a[n],b[n],c[n];
  		R(i,n) sl(a[i]);
  		int running_count=0;
  		b[0]=0;
  		FOR(i,1,n-1){
  			if(a[i]==a[i-1]){
  				b[i]=++running_count;
  			}
  			else
  				{running_count=0;b[i]=running_count;}
  		}
  		c[n-1]=0; running_count=0;
  		FORD(i,n-2,0){
  			if(a[i]==a[i+1]){
  				c[i]=++running_count;
  			}
  			else
  				{running_count=0;c[i]=running_count;}
  		}
  	//	R(i,n) printf("%lld %lld\n",b[i],c[i]);
  			int l,r,k;
  		R(i,m){
  			s(l);s(r);s(k);
  			l--;r--;
  			int mid=floor((r+l)/2);
  			if(min(b[mid],floor((r-l+1)/2))+1+min(c[mid],floor((r-l+1)/2))>=k)
  				printf("%lld\n",a[mid]);
  			else
  				printf("-1\n");
  		}

  }
	
	return 0;
}
	