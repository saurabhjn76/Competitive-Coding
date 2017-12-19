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
    int n,m;
    s(n);s(m);
    string s[n];
    R(i,n){
    	cin >> s[i];
    }
    int cost1=0,cost2=0;
    R(i,n){
    	R(j,m){
    		if((i+j)%2==0){
    			if(s[i][j]!='R'){
    				cost1+=3;
    			} else {
    				cost2+=5;
    			}
    		} else {
    			if(s[i][j]!='G'){
    				cost1+=5;
    			} else {
    				cost2+=3;
    			}
    		}
    	}
    }
    printf("%d\n",min(cost2,cost1) );
  }
	
	return 0;
}