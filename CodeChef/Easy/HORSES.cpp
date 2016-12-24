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
  int t;
  cin >> t;
  while(t--){
  int n;
  cin >> n;
  ll a[n],min;
  for(ll i=0;i<n;i++)
  	cin >> a[i];
  sort(a,a+n);
  min=a[1]-a[0];
  for(ll i=2;i<n;i++){
  	if(a[i]-a[i-1]<min)
  		min=a[i]-a[i-1];
  }
  printf("%lld\n",min );

  }
	
	return 0;
}
	