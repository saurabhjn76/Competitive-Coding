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
  /*int t;
  cin >> t;
  while(t--){
  
  }
	*/
   ll  n ,m ,k;
   sl(n);sl(m);sl(k);
   ll row;
   ll v[m];
   fill_n(v,m,0);
   ll ans=0;
   for(ll i=0;i<n;i++){
   		sl(row); row--;
   		if(i>=m*k)
	{ ans++; continue;}
   		if(v[row]<k)
   			v[row]++;
   		else{
   			while(v[(++row%m)]>=k){
   			}
   			v[row]++;
   			ans++;
   		}
   }
   /*R(i,m){
   	printf("%d\n",v[i] );
   }*/
   	/*if(n>m*k)
   	ans=ans+n-(m*k);*/
   printf("%lld\n",ans);
	return 0;
}
	