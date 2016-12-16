#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007
# define GETCHAR getchar_unlocked
typedef long long ll;

inline ll  readllInt() {
    ll  n = 0;
    char c;
    while (1){ 
      c=GETCHAR();
      if(c=='\n'||c==' ') break;
       n = n * 10 + c - '0';
    }
    return n;
}

inline int readInt() {
    int n = 0;
    char c;
    while (1){ 
      c=GETCHAR();
      if(c=='\n'||c==' ') break;
       n = n * 10 + c - '0';
    }
    return n;
}
ll solve(ll a, ll b, ll c, ll d)
{
	if (a > b or c > d or d < a)
		return 0;
 
	if (b > d)
		b = d;
 
	if (c < a)
		c = a;
 
	if (b < c)
		return (b-a+1)*(d-c+1);
 
	ll ans = (b-a+1)*(d-c+1);
	ans -= (b-c+1)*(b-c+2)/2;
 
	return ans;
}
int main()
{
  int t=readInt();
  while(t--){
  ll a,b,c,d;
  cin >> a >> b >> c >> d;
  
  printf("%lld\n",solve(a,b,c,d));
	}	
	return 0;
}
	