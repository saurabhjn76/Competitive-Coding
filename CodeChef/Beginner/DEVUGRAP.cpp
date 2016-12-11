#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007
# define GETCHAR getchar_unlocked
typedef long long ll;

int min(int a,int b){
	return a <b ? a : b;
}
int max(int a,int b){
	return a >b ? a : b;
}
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
  long long int n,k;
  cin >> n >>k;
  long long int kk,count=0;
  for(long long int i=0;i<n;i++){
  		cin >> kk;
  		if(kk-min(kk%k,k-kk%k)>0)
  			count+=min(kk%k,k-kk%k);
  		else
  			count+=k-kk%k;


  } 	
  printf("%lld\n",count);
 }
	
	return 0;
}
	