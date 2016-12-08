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
  	string s;
  	cin >>s;
  	
  	for(int i=0;i<s.length();i++){
  		if(s[i]!=s[s.length()-1-i]){
  			printf("losses\n");
  			break;
  		}
  	
  	if(i==s.length()-1)
  		printf("wins\n");
  	}
  }
	
	return 0;
}
	