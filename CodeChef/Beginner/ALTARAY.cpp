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
  ll a[n],b[n],count=1;
  for(int i=0;i<n;i++){
  		cin >> a[i];
  }
  for(int i=n-1;i>=0;i--)
  {
  	b[i]=count;
  	if(i==0)
  		break;
  	if((a[i-1]<0 && a[i]<0) || (a[i-1]>=0 && a[i] >=0))
  	{
  		count=1;
  	}
  	else
  		count++;
  }
  for(int i=0;i<n-1;i++)
  	printf("%lld ",b[i] );
  	printf("%lld\n",b[n-1] );
  }
	
	return 0;
}
	