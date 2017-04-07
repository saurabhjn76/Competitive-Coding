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
  	set<string> a;
  	string ab;
  	set<string> b;
  	int coun=0;
	R(i,4){
		cin >> ab;
		a.insert(ab);
	}  	
	R(i,4){
		cin >> ab;
		b.insert(ab);
	}
	for (set<string>::iterator it=a.begin(); it!=a.end(); ++it){
		for (std::set<string>::iterator it2=b.begin(); it2!=b.end(); ++it2){
			if((*it).compare(*it2)==0){
				coun++;
			}
		}
	}
	//printf("%d\n",coun );
	if(coun>=2)
		printf("similar\n");
	else
		printf("dissimilar\n");
	
  }
	
	return 0;
}
	