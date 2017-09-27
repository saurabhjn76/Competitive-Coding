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
  int g;
  string s;
  while(t--){
  int a[4]; // BEMR
  R(i,4){
  	cin >> s;
  	s(g);
  	switch(s[0]){
  		case 'B': a[0]=g;break;
  		case 'E': a[1]=g;break;
  		case 'M': a[2]=g;break;
  		case 'R': a[3]=g;break;

  	}
  }
  	if(a[2]> a[3] && a[0]>a[1]){ 
  		printf("Barcelona\n");
  	}
  	else{
  		printf("RealMadrid\n");
  	}

  }
	
	return 0;
}
	