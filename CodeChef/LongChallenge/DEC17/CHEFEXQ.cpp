#include "bits/stdc++.h"
#include <unordered_map>
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
  ll n,q;
  sl(n); sl(q);
  ll arr[n];
  R(i,n){
  	sl(arr[i]);
  }
  
  ll *xorArr = new ll[n];
  int abc[1000001];
  fill_n(abc,1000001,0);
 
    // Initialize first element of prefix array
    xorArr[0] = arr[0];
    abc[arr[0]]++;
    // Computing the prefix array.
    for (ll i = 1; i < n; i++){
        xorArr[i] = xorArr[i-1] ^ arr[i];
        abc[xorArr[i]]++;
    }

    ll x,y,z;
    R(i,q){
    	sl(x);sl(y);sl(z);
    	if(x==1){
    		int temp=arr[y-1];
    		arr[y-1]=z;
    		if(y>1){
    			 for (ll xx = y-1; xx < n; xx++){
    			 	abc[xorArr[xx]]--;
        			xorArr[xx] = xorArr[xx-1] ^ arr[xx];
        			abc[xorArr[xx]]++;
        		}
    		} else {
    			abc[xorArr[0]]--;
    			abc[z]++;
    			 xorArr[0]=z;
    			  for (ll yy = 1; yy < n; yy++){
    			  		abc[xorArr[yy]]--;
       				 xorArr[yy] = xorArr[yy-1] ^ arr[yy];
       				 abc[xorArr[yy]]++;
    			  }
    		}
    	} else {
    		
		    printf("%lld\n",ans );

    	}
    }
   

	
	return 0;
}