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
  string s1,s2;
  cin >> s1 >>s2;
  int min=0,max=0;
  for(int i=0;i<s1.length();i++){
  		if(s1[i]!=s2[i] && (s1[i]!='?' && s2[i]!='?')){
  			min++;
  			max++;
  		}
  		else if(s1[i]==s2[i] && s2[i]=='?'){
  			max++;
  		}
  		else if(s1[i]=='?' || s2[i]=='?')
  			max++;
  }
  printf("%d %d\n",min,max );
 }	
	return 0;
}
	