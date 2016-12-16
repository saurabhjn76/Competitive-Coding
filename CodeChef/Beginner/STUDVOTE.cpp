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
  int n,k;
  cin >> n >> k;
  int a[n+1];bool b[n+1];
  fill_n(a,n+1,0);
  fill_n(b,n+1,true);
  int l;
  for(int i=0;i<n;i++){
  	cin >> l;
  	if(l==i+1)
  		b[i+1]=false;

  	a[l]++;
  	}
  	int count=0;
  	for( int i=1;i<=n;i++){
  		if(a[i]<k){
  			b[i]=false;
  		}
  		if(b[i])
  			count++;
  	}
  	printf("%d\n",count );

  }
	
	return 0;
}
	