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
  	int n,m ,k;
  	cin >> n >> m >> k;
  	if(n<m)
  		if(n+k>=m)
  			printf("0\n");
  		else
  			printf("%d\n",m-n-k );
  	else if(n>=m)
  		if(m+k>=n)
  			printf("0\n");
  		else
  			printf("%d\n",-m+n-k );

  }
	
	return 0;
}
	