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
  int n,m,i,j,k;
  cin >> n >> m;
  bool a[n+1];
  fill_n(a,n+1,false);
  for(i=1;i<=m;i++){
  	cin >> k;
  	a[k]=true;
  }
  int count=0;
  for(i=1;i<=n;i++){
  	if(!a[i]){
  		if(count%2==0)
  			{ printf("%d ",i );
  			   a[i]=true;
  			}
  		count++;
  	}
  }
  printf("\n");
  for(i=1;i<n+1;i++)
  	if(!a[i])
  		printf("%d ",i);
  	printf("\n");

  }
	
	return 0;
}
	