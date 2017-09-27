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
 	string s;
 	cin >> s;
 	int count=0;
 	char search='1';
 	FORD(i,s.length()-1,0){
 		if(s[i]==search){
 			count++;
 			search = search=='1'?'0':'1';
 		}
 	}
 	printf("%d\n",count);
	
	return 0;
}
