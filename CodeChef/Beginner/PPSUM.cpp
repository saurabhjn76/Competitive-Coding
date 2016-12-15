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
int sum(int n){
	return (n*(n+1))/2;
}

int main()
{
  int t=readInt();
  while(t--){
  int d,n;
  cin >> d >> n;
  for(int i=0;i<d;i++)
  	n=sum(n);
  printf("%d\n",n );
}
	
	return 0;
}
	