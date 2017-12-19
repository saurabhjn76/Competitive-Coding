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
    int n,p;
    s(n);s(p);
    if(p==1 || p==2 || n<=2){
    	printf("impossible\n");
    } else {
    	string s="a";
    	R(i,p-2){
    		s+="b";
    	}
    	s+="a";
    	R(i,n/p){
    		cout << s;
      	}
      	printf("\n");
    }
  }
	
	return 0;
}