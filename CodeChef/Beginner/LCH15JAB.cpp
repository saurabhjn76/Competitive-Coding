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
  cin >> s;
  int a[27];
  fill_n(a,27,0);
  for(int i=0;i<s.length();i++){
  	a[s[i]-'a']++;
  }
  for(int i=0;i<26;i++){
  	if(a[i]==s.length()-a[i])
  	{
  		printf("YES\n");
  		break;
  	}
  	else if(i==26-1)
  		printf("NO\n");
  }
  }
	
	return 0;
}
