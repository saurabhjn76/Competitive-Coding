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
   int a,b,c;
   cin >> a >> b >> c;
   if( a > 0 && b > 0 && c > 0 ){
   	 if(a+b+c==180)
   	 	printf("YES\n");
   	 else
   	 	printf("NO\n");
   }
   else
   	printf("NO\n");
  }
	
	return 0;
}
	