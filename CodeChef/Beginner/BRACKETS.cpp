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
  int max_balance=0,current_balance=0,first_index=0,last_index=0;
  	for(int i=0;i<s.length();i++){
  		if(s[i]=='(')
  			current_balance++;
  		if(s[i]==')')
  			current_balance--;
  		max_balance= max(max_balance,current_balance);
  	}
  //	printf("%d\n",max_balance );
  	for(int i=0;i<max_balance;i++){
  		printf("(");
  	}
  	for(int i=0;i<max_balance;i++){
  		printf(")");
  	}
  	printf("\n");
  }
	
	return 0;
}
	