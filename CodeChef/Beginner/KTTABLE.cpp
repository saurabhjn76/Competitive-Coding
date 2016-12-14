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
  	int n;
  	cin >> n;
  	ll a[n],b[n];
  	for(int i=0;i<n;i++)
  		cin >> a[i];
  	for(int i=0;i<n;i++)
  		cin >> b[i];
  	ll count=0;
  	if(a[0]>=b[0])
  		count++;
  	for(int i=1;i<n;i++)
  		{
  			if(a[i]-a[i-1]>=b[i])
  				count++;

  		}
  		printf("%lld\n",count );

  
  }
	
	return 0;
}
	