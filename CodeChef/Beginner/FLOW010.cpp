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
  		char c;
  		cin >> c;
  		if(c=='B' || c=='b')
  			printf("BattleShip\n");
  		else if(c=='C' || c=='c')
  			printf("Cruiser\n");
  		else if(c=='D' || c=='d')
  			printf("Destroyer\n");
  		else
  			printf("Frigate\n");
  }
	
	return 0;
}
