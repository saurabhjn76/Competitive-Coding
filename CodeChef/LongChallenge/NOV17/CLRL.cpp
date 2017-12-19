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
    int n, dest;
    s(n);s(dest);
    ll a[n];
    R(i,n){
    	sl(a[i]);
    }
    ll last_max=1000000001;
    ll last_min=-1;
    bool flag=false;
    if(n==1){
    	if(a[0]==dest)
    		printf("YES\n");
    	else
    		printf("NO\n");
    continue;
    }
    R(i,n){
    	if(i==0){	
    		if(a[i]>dest)
    			last_max=a[i];
    			else{
    				last_min=a[i];
    			}
    		continue;	
    	}
    	//printf("%d\n", i);
    	if(a[i]>dest && a[i]<last_max && a[i] > last_min){
    		last_max=a[i];
    	} else if(a[i]<dest && a[i]>last_min && a[i] < last_max){
    		last_min=a[i];
    	} else if(a[i]==dest && i==n-1){
    		printf("YES\n");
    	} else{
    		printf("NO\n");
    		break;
    	}
    }


  }
	
	return 0;
}