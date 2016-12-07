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
	int t= readInt();
	while(t--){
		ll  s = readllInt();
		int count=0;
		while(s>0){
			if(s%10==4)
				count++;
			s/=10;
		}
		printf("%d\n",count);
	}
	return 0;
}
	