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

int main()
{
  int t=readInt();
  while(t--){
  ll n,b,m,res=0;
  cin >> n >> b >> m;
   while (n) {
        int problems = (n + 1) / 2;
        res += problems * m;
        n -= problems;
        if (n) {
        res += b;
        }
        m = m * 2;
    }
    printf("%lld\n",res );

  }
	
	return 0;
}
	