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
  int n;
  cin >> n;
  switch(n%8){
  	case 0: printf("%dSL\n",n-1);
  	break;
  	case 1: printf("%dLB\n",n+3);
  	break;
  	case 2: printf("%dMB\n",n+3);
  	break;
  	case 3: printf("%dUB\n",n+3);
  	break;
  	case 4:printf("%dLB\n", n-3);
  	break;
  	case 5: printf("%dMB\n",n-3 );
  	break;
  	case 6: printf("%dUB\n",n-3 );
  	break;
  	case 7:printf("%dSU\n",n+1);
  	break;
  	}
  }
	
	return 0;
}
