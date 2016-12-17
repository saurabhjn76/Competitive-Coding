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
  ll n,k,e,m;
  cin >> n >> k >> e >> m;
  	ll a[n],mm,sum=0;
  	for(int i=0;i<n-1;i++){
  		sum=0;
  		for(int j=0;j<e;j++){
  			cin >> mm;
  			sum+=mm;
  		}
  		a[i]=sum;
  	}
  	sum=0;
  	for(int j=0;j<e-1;j++){
  			cin >> mm;
  			sum+=mm;
  		}
  		a[n-1]=sum;

  	sort(a,a+n-1);
  	if(a[n-k-1]-a[n-1]<=0)
  		printf("0\n");
  	else if(a[n-k-1]-a[n-1]>=m)
  		printf("Impossible\n");
  	else
  		printf("%lld\n",(a[n-k-1]-a[n-1])+1);
  	/*for( int i=0;i<n;i++){
  		printf("%lld ",a[i] );
  		printf("\n");
  	}*/

  }
	
	return 0;
}
	