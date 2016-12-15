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
ll max (ll a,ll b)
{
	return a>b?a:b;
}
int main()
{
  int t=readInt();
  while(t--){
  ll a,b,c,d;
  cin >> a >> b >> c >> d;
  ll count=0;
  for(ll i=a;i<=b;i++)
  	count+=max(d-max(c,i+1)+1,0);

  printf("%lld\n",count);
	}	
	return 0;
}
	