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
  //cin >> t;
  t=1;
  while(t--){
  	ll n ,q;
  	ll x,y,z;
  	cin >> n >> q;
  	ll a[n];
  	for(int i=0;i<n;i++)
  		cin >> a[i];
  	for( int i=0;i<q;i++){
  		int k;
  		cin >> k;
  		if(k==1){
  			ll sum=0;
  			cin >> x >> y;
  			for(int j=x-1;j<y;j++)
  			{
  				sum+=a[j];
  			}
  			printf("%lld\n",sum);
  		}
  		else if(k==2){
  			cin >> x >> y >> z;
  			for(int j=x-1;j<y;j++)
  				a[j]=a[j]%z;
  		}
  	} 
  }
	
	return 0;
}
	