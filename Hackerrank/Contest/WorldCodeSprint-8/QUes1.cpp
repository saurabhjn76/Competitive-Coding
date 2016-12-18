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
  		ll n,m;
  		cin >> n;
  		ll a[n],b[n];
  		for(ll i=0;i<n;i++){
  			cin >> a[i];

  		}
  		ll rank=1;
  		b[0]=rank;
  		for(ll i=1;i<n;i++){
  			if(a[i]<a[i-1]){
  				rank++;
  				b[i]=rank;
  			}
  			else{
  				b[i]=rank;
  			}

  		}
  		
  		cin >> m;
  		ll c[m];
  		for(ll i=0;i<m;i++){
  			cin >> c[i];
  		}
  		ll j=n-1;
  		/*for(int i=0;i<n;i++)
  			printf("%lld\n",b[i] );*/
  		for(ll i=0;i<m;i++){
  			while(j>=0 && c[i]>a[j]){
  				j--;
  			}
  			if(j==-1)
  				printf("1\n");
  			else if(c[i]<a[j])
  				printf("%lld\n",b[j]+1);
  			else if(c[i]==a[j])
  				printf("%lld\n",b[j]);
  			else if(c[i]==a[j+1])
  				printf("%lld\n",b[j+1]);
  			else if(c[i]>a[j+1])
  			printf("%lld\n",b[j+1]+1 );
  		}

  		
  }
	
	return 0;
}
	