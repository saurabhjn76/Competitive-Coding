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
  cin >> t;
  while(t--){
  string s;
  cin >> s;
  int count=0;
  REP(i,s.length()-1){
  
  	if(s[i+1]>=s[i]){
  		count+=s[i+1]-s[i];
  	}
  	else{
  		count+=26+(s[i+1])-s[i];
  	}
  	count+=1;
  }
 // printf("%d\n",count );
  if(count+2<=11*s.length())
  	printf("YES\n");
  else
  	printf("NO\n");
  }
	
	return 0;
}
