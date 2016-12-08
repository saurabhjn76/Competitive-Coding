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
  	int n=readInt();
  	int  k= readInt();
  	int max=0;   // N%(N/(N/K+1)+1) ---O(1) solution...
  	for(int i=1;i<=k;i++){
  		if(max<n%i)
  			max=n%i;
  	}
  	printf("%d\n",max );
  }
	
	return 0;
}
	