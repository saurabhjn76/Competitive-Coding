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
	string s;
	cin >> s;
	bool a[26];
	fill_n(a,26,false);
	for(int i=0;i<s.length();i++){
		a[s[i]-'a']=true;
	}
  int t;
  cin >> t;
  while(t--){
  	string ss;
  	cin >> ss;
  	for(int i=0;i<ss.length();i++){
  		if(!a[ss[i]-'a']){
  			printf("No\n");
  			break;
  		}
  		else if(i==ss.length()-1)
  			printf("Yes\n");
  	}
  }
	
	return 0;
}
	