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
  	ll a[n];
  	for(int i=0;i<n;i++)
  		cin >> a[i];
  	ll sum=0,pro=1,count=0;
  	for(int i=0;i<n;i++){
  		sum=0;pro=1;
  		for(int j=i;j<n;j++){
  			sum+=a[j];
  			pro*=a[j];
  			if(sum==pro)
  				count++;
  		}
  	}
  	printf("%lld\n",count );

  }
	
	return 0;
}
	