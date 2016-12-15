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
  string s,s1;
  cin >> s >> s1;
  for(int i=0;i<s.length();i++){
  	if(s[i]=='B' && s1[i]=='B'){
  		printf("W");
  	}
  	else
  		printf("B");
  }
  printf("\n");
  }
	
	return 0;
}
	