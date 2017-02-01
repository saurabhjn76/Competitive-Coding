#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf("%c",&n)
# define sl(n)                       scanf("%lld",&n)
# define sf(n)                       scanf("%lf",&n)
# define ss(n)                       scanf("%s",n)

#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

# define INF                         (int)1e9
# define EPS                         1e-9
# define MOD 1000000007


typedef long long ll;

int main()
{
  int t;
  ll curr=1,coun=0,ans;
  cin >> t;
  while(t--){
  	string s;cin >> s;
  	curr=0;coun=0,ans=0;
  	REP(i,s.length()){
  		if(s[i]=='#')
  		{
  			if(curr<coun){
  				ans+=1;
  				curr=coun;
  				coun=0;
  			}
  		}
  		else{
  			coun++;
  		}
  		}
  	printf("%lld\n",ans );

  }
	
	return 0;
}
	