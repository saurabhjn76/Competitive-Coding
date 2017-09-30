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
    int a[26];
    fill_n(a,26,0);
    string s1,s2;
    cin >> s1 >> s2;
    R(i,s2.length()){
    	a[s2[i]-'a']++;
    }
    ll pro=1;
    R(i,s1.length()){
    	pro*=a[s1[i]-'a']--;
    	pro%=MOD;
    }
    printf("%lld\n",pro );

  }
	
	return 0;
}