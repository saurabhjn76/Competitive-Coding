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
 	ll ans=0;
 	vector<char> v;
 	bool flag=false;
 	v.push_back(s[0]);
 	if(s.length()==1){
 		printf("0\n");
 		continue;
 	}
 	R(i,s.length()-1){
 		if(s[i]==s[i+1]){
 			ans++;
 		} else {
 			v.push_back(s[i+1]);
 		}
 	}
 	// R(i,v.size()){
 	// 	printf("%c",v[i]);
 	// }
 	// printf("\n");

 	R(i,(int)v.size()-2){
 		if(v[i]==v[i+2] && v[i]!=v[i+1]){
 			ans++;
 		}
 	}
 	
 	printf("%lld\n", ans );   
  }
	
	return 0;
}