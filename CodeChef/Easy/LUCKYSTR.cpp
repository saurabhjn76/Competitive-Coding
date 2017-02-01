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
  int t,k;
  s(k);s(t);
  string s[k];
  REP(i,k){
  	cin  >> s[i];
  }
  REP(i,t){
  	string s1;
  	cin >> s1;
  	if(s1.length()>=47)
  		printf("Good\n");
  	else{
  		REP(j,k){
  			if(s1.find(s[j]) != string::npos){
  				printf("Good\n");
  				break;
  			}
  			if(j==k-1){
  				printf("Bad\n");
  			}
  		}
  	}
  }
	
	return 0;
}
	