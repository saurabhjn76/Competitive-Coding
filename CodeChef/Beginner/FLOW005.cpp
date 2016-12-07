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
  	ll n = readllInt();
  	int count=0;
  	count+=n/100;
  	n%=100;
  	count+=n/50;
  	n%=50;
  	count+=n/10;
  	n%=10;
  	count+=n/5;
  	n%=5;
  	count+=n/2;
  	count+=n%2;
  	printf("%d\n",count );


  }
	
	return 0;
}
	