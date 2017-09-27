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
ll count_=0;
ll max_count=0;
ll maxSubarray(ll arr[], ll n, ll m)
{
    ll x, prefix = 0, maxim = 0;
 
    set<ll> S;
    S.insert(0);    
 
    // Traversing the array.
    for (ll i = 0; i < n; i++)
    {
        // Finding prefix sum.
        prefix = (prefix + arr[i])%m;
 
        // Finding maximum of prefix sum.
        
       // max_count=max(max_count,count_);
        maxim = max(maxim, prefix);

        
 
        // Finding iterator polling to the first 
        // element that is not less than value 
        // "prefix + 1", i.e., greater than or 
        // equal to this value.
        set<ll>::iterator it = S.lower_bound(prefix+1);
 
        if (it != S.end()){
            maxim = max(maxim, prefix - (*it) + m );
	          
	        
        }
 		//max_count=max(max_count,count_);
        // Inserting prefix in the set.
        S.insert(prefix);
    }
 
    return maxim;
}
ll maxSubarrayS(ll arr[], ll n, ll m,ll maxx)
{
    ll x, prefix = 0, maxim = 0;
    count_=0;max_count=0;
 
    set<ll> S;
    S.insert(0);    
 
    // Traversing the array.
    for (ll i = 0; i < n; i++)
    {
        // Finding prefix sum.
        prefix = (prefix + arr[i])%m;
 
        // Finding maximum of prefix sum.
        if(prefix==maxx)
        	count_++;
        
       // max_count=max(max_count,count_);
        maxim = max(maxim, prefix);
        
        
        
 
        // Finding iterator polling to the first 
        // element that is not less than value 
        // "prefix + 1", i.e., greater than or 
        // equal to this value.
        set<ll>::iterator it = S.lower_bound(prefix+1);
        if(it==S.end()){
        	count_+=S.size()+1-i;
        }

        if (it != S.end()){
            maxim = max(maxim, prefix - (*it) + m );
	          if(prefix - (*it) + m==maxx){
	        	count_++;
	        }     
        }
 		//max_count=max(max_count,count_);
        // Inserting prefix in the set.
        //int kk=S.size();
        S.insert(prefix);
        
    }
 
    return count_;
}

int main()
{
  int t;
  cin >> t;
  while(t--){
 	 ll n,p;
 	 sl(n);sl(p);
 	 ll a[n];
 	 R(i,n){
 	 	sl(a[i]);
 	 }
 	 ll maxx=maxSubarray(a,n,p);
 	 if(maxx==0){
 	 	printf("0 %lld\n",n*(n+1)/2 );
 	 }
 	 else
 	 printf("%lld %lld\n",maxx,maxSubarrayS(a,n,p,maxx));
  }
	
	return 0;
}
	