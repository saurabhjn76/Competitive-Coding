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
  	long long  int a[n];
  	long long  int min=10000001;
  	 for(int i=0;i<n;i++){
  	 	scanf("%lld",&a[i]);
  	 	if(a[i]<min)
  	 		min=a[i];
  	 }
  	 printf("%lld\n",(n-1)*min );
  }
	
	return 0;
}
	