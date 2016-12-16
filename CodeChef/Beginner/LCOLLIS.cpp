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
  	int n,m;
  	cin >> n >> m;
  	int a[n][m];
  	for(int i=0;i<n;i++){
  		for(int j=0;j<m;j++){
  			scanf("%1d",&a[i][j]);
  		}
  	}
  /*	for(int i=0;i<n;i++)
  	{
  		for(int j=0;j<m;j++){
  			printf("%d ",a[i][j] );
  		}
  		printf("\n");
  	}*/
  	int count=0,ans=0;
  	for(int j=0;j<m;j++){
  		int count=0;
  		for(int i=0;i<n;i++){
  				if(a[i][j]==1)
  					count++;
  		}
  		if(count>1)
  			ans+=(count*(count-1))/2; // nc2 == n(n-1)/!2!
  	}
  	printf("%d\n", ans);
  }
	
	return 0;
}
	