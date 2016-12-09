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
int gcf(int a, int b)
{
    if (a == 0)
        return b;
    return gcf(b%a, a);
} 

int main()
{
  int t=readInt();
  while(t--){
   int a,b;
   cin >> a >> b;
   int gc=gcf(a,b);
   printf("%d\n",(a/gc)*(b/gc) );
  }
	
	return 0;
}
	