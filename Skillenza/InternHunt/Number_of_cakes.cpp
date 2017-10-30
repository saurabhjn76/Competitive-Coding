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
bool isSubset(int set[], int n, ll sum)
{

    bool subset[n+1][sum+1];
  
   FOR(i,0,n)
      subset[i][0] = true;
  
   FOR(i,0,sum)
      subset[0][i] = false;
  
     FOR(i,1,n) {
       FOR(j,1,sum) {
         if(j<set[i-1])
         subset[i][j] = subset[i-1][j];
         if (j >= set[i-1])
           subset[i][j] = subset[i-1][j] || 
                                 subset[i - 1][j-set[i-1]];
       }
     }
  
     return subset[n][sum];
}

int main()
{
  int t;
  cin >> t;
  while(t--){
    int n;
    s(n);
    int set[n];
    R(i,n){
    	s(set[i]);
    }
    ll sum;
    sl(sum);
    if(isSubset(set, n,sum)){
    	printf("YES\n");
    } else{
    	printf("NO\n");
    }
  }
	
	return 0;
}