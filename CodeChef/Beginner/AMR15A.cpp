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
  int eve=0,odd=0;
  while(t--){
  int n ;
  cin >>n;
  if(n%2==0)
  	eve++;
  else
  	odd++;
  }
  if(eve>odd)
  	printf("READY FOR BATTLE\n");
  else
  	printf("NOT READY\n");
	
	return 0;
}
	