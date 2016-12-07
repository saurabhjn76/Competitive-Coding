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
  ll remainder=0,reversedNumber=0;
  while(t--){
  	reversedNumber=0;
  	ll n= readllInt();
  	while(n != 0)
    {
          reversedNumber *= 10;
	        reversedNumber += n%10;
	        n /= 10;
    }
    printf("%lld\n",reversedNumber );

  }
	
	return 0;
}
	