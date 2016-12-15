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
  int i;
  cin >> s;
  if(s[0]==s[1])
  	printf("NO\n");
  else{
  for( i=0;i<s.length();i++){
  	if(i%2==0 && s[i]==s[0])
  		continue;
  	else if(i%2==1 && s[i]==s[1])
  		continue;
  	else{
  		printf("NO\n");
  		break;
  	}
  }
  	 if (i==s.length())
  		printf("YES\n");
  }
    }
	
	return 0;
}
