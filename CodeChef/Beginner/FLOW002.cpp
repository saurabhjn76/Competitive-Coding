#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007
# define GETCHAR getchar_unlocked

inline long long int readInt() {
   long long  int n = 0;
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
	long long int t=readInt();
	while(t--){
		long long int i=readInt();
		long long int j=readInt();
		printf("%lld\n",i%j );
	}
	return 0;
}
	