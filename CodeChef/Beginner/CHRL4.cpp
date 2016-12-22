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
  ll i,j,n,k;
  cin >> n >> k;
  int a[n];
  ll b[n];
  for(i=0;i<n;i++){
  	cin >> a[i];
  }
  b[0]=a[0];

  for(i=1;i<n;i++){
  	ll min=100000000;
  	for(j=i-k>0?i-k:0;j<i;j++){
  		if(min>b[j]){
  			min=b[j];
  		}
  	}
  	b[i]=min*a[i];
  }
 	for(i=0;i<n;i++){
 		printf("%lld\n",b[i] );
 	}


  }
	
	return 0;
}
	