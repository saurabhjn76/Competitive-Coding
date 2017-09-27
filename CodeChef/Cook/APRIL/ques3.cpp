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
  int n;
  ll k;
  s(n);sl(k);
  ll ans=0;
  string s;
 ll a[n];
  int b[n];
  fill_n(a,n,0);
 // fill_n(b,n,0);
  cin >> s;
  int a_count=0,b_count=0;
  R(i,n){
  	if(s[i]=='a'){
  		a_count++;
  	}
  	else if(s[i]=='b'){
  		b_count++;
  	}
  	a[i]=b_count;
  	//b[i]=a_count;
  }
  R(i,n){
  	a[i]=b_count-a[i];
  }
 /* R(i,n){
  	printf("%lld\n",a[i]);
  }*/
  
  	R(j,n){
  		if(s[j]=='a'){
  			ans+=b_count*(k*(k-1))/2 + k*a[j];
  		}
  }
  printf("%lld\n",ans );
  }
	
	return 0;
}
	