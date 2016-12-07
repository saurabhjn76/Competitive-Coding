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
  ll a,b,c;
  a=readllInt();
  b=readllInt();
  c=readllInt();
  if((a>=b && a<=c) || (a>=c && a<=b))
  	printf("%lld\n",a );
  else
  	if((b>=a && b<=c) || (b>=c && b<=a))
  		printf("%lld\n",b );
  	else
  		printf("%lld\n",c );

  }
	
	return 0;
}
	