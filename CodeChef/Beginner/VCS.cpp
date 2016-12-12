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
  int n,m,k,l;
  cin >> n >> m >>k;
  bool a[n],b[n];
  fill_n(a,n,false);
  fill_n(b,n,false);
  for(int i=0;i<m;i++){
  	cin >> l;
  	a[l-1]=true;
  }
  for(int i=0;i<k;i++){
  	cin >> l;
  	b[l-1]=true;
  }
  int count=0,count1=0;
  for(int i=0;i<n;i++){
  	if(a[i] && b[i]){
  		count++;
  	}
  	if(!a[i] && !b[i]){
  		count1++;
  	}
  }
  printf("%d %d\n",count,count1 );

  }
	
	return 0;
}
	