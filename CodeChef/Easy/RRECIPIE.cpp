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
# define MOD 10000009


typedef long long ll;

int main()
{
  int t;
  cin >> t;
  while(t--){
  	string s;
  	cin >> s;
  	ll sum=1;
  	int n=s.length();
  	R(i,n)
  	{
  		if(s[i]=='?' && s[n-1-i]=='?'){
  			sum*=26;
  			s[i]='a';
  			sum%=MOD;
  		}
  		if(s[i]!='?' && s[i]!=s[n-1-i] && s[n-1-i]!='?')
  			{ sum=0; break;}

  	}
  	printf("%lld\n",sum );
  	}
	
	return 0;
}
	