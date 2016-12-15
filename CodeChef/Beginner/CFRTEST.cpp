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
  int n ;
  cin >> n;
  bool a[101];
  fill_n(a,101,false);
  int j;
  for(int i=0;i<n;i++){
  	cin >> j;
  	a[j]=true;
  }
  int coun=0;
  for(int i=0;i<101;i++){
  	if(a[i])
  		coun++;
  }
  printf("%d\n",coun );
  	

  }
	
	return 0;
}
	