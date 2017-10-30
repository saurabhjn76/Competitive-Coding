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
   bool a[2 * (ll) pow(10,5)+1];
    fill_n(a,2 * (ll) pow(10,5)+1,false);
    int n, k,x;
    s(n); s(k); int b[n];
    R(i,n){
      s(x);
      a[x]=true;
    }
    int i=0;
    while(a[i] || k > 0){
      if(!a[i]){
        k--;
      }
      i++;
    }
    printf("%d\n",i);
  }
  
  return 0;
} 
