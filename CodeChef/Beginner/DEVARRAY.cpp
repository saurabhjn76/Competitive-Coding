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
  int t=1;
  while(t--){
  ll n ,q,i,j,m;
  cin >> n >> q;
  cin >> m;
  int max=m,min=m;
  for(i=1;i<n;i++){
  	cin >> m;
  	if(m>max)
  		max=m;
  	if(m<min)
  		min=m;
  }
  for(i=0;i<q;i++){
  	cin >> m;
  	if(m<= max && m>=min)
  		printf("Yes\n");
  	else
  		printf("No\n");
  }

  }
	
	return 0;
}
	