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
  	bool cook=false,eat=false,sleep=false,noflag=false;
  	cin >> s;
  	R(i,s.length()){
  		switch(s[i]){
  			case 'C': if(eat || sleep){
  				printf("no\n");
  				i=s.length()+3;
  				noflag=true;
  			}
  			else{
  				cook=true;
  			}
  			break;
  			case 'E': if(sleep){
  				printf("no\n");
  				i=s.length()+3;
  				noflag=true;
  			}
  			else{
  				eat=true;
  			}
  			break;
  			case 'S': sleep=true;
  			break;
  		}
  		

  	}
  	if(!noflag)
  			printf("yes\n");


  }
	
	return 0;
}
	