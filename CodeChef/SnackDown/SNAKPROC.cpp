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
  int n; s(n);
  string s;
  cin >> s;
  int count=0;
  bool flag=false;
  R(i,n){
  	if(s[i]=='H')
  		count++;
  	if(s[i]=='T')
  		count--;
  	if(count<0 || count>1){
  		printf("Invalid\n");
  		flag=true;
  		break;
  	}
  }
  if(count==0){
  	printf("Valid\n");
  }
  else if (!flag){
  	printf("Invalid\n");
  }
  }
	
	return 0;
}
	