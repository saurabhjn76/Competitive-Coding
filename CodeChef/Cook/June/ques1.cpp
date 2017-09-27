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
  string s;
  cin >> s;
  int count1=0,count2=0;
  if(s[0]=='D')
  	count1++;
  else
  	count2++;
  for(int i=1;i<s.length();i++){
  	if(s[i-1]!='D' && s[i]=='D'){
  		count1++;
  	}
  }
   for(int i=1;i<s.length();i++){
  	if(s[i-1]!='U' && s[i]=='U'){
  		count2++;
  	}
  }
  printf("%d\n",count1 < count2 ? count1 : count2  );
  }
	
	return 0;
}
	