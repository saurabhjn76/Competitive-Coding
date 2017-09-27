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
 // cin >> t;
  while(t--){
  	int n;
  	s(n);
  	int a[n];
  	R(i,n){
  		s(a[i]);
  	}
    ll sumlr[n+1],su=0;
    sumlr[0]=0;
    R(i,n){
      su+=a[i];
      sumlr[i+1]=su;
    }
  	int ans=0;
  	R(i,n){
  		for(int j=0;j<n-i;j++){
  			int summ=sumlr[j+i+1]-sumlr[j];
  			/*for(int k=j;k<=j+i;k++){
  				summ+=a[k];
  			}*/
  			ans^=summ;
  		}
  	}
  	printf("%d\n",ans );

  }
	
	return 0;
}
	