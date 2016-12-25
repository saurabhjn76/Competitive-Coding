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
  int t;
  cin >> t;
  while(t--){
  int n,c,note;
  bool a[200000];
  fill_n(a,200000,false);
  cin >> n >> c;
  a[0]=true;
  for(int i=0;i<n;i++){
  	cin >> note;
  	for(int j=c;j>=0;j--)
  	{
  		if(a[j])
  			a[j+note]=true;
  	}
  }
  /*for(int j=0;j<=c;j++)
  	if(a[j])
  		printf("%d ",j );
  	printf("\n");*/
  if(a[c])
  	printf("Yes\n");
  else
  	printf("No\n");
  }
	
	return 0;
}
	