//http://www.geeksforgeeks.org/find-the-smallest-window-in-a-string-containing-all-characters-of-another-string/
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
    string s1,s2;
    cin >> s1 >> s2;
    int a[26], int b[26];
    fill_n(a,26,0);
    fill_n(b,26,0);
    R(i,s1.length()){
    	a[s1[i]-'a']++;
    }
    R(i,s2.length()){
    	b[s2[i]-'a']++;
    }
    int start_index
  }
	
	return 0;
}