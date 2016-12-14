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
  int a[n];
  for(int i=0;i<n;i++)
  	cin >> a[i];
  if(n<4)
  	printf("-1\n");
  else
  	{
  		sort(a,a+n);
  		int pro=1,i=0;
  		for( i=n-1;i>2;i--){
  			if(a[i]==a[i-1]){
  				//printf("%d--%d\n",i,i-1);
  				pro*=a[i];
  				for(int j=i-2;j>=1;j--){
  					if(a[j]==a[j-1]){
  						//printf("%d--%d\n",j,j-1);
  						pro*=a[j];
  						printf("%d\n",pro );
  						i=-1;
  						break;
  					}
  				}
  			}
  		}
  		if(i!=-2)
  			printf("-1\n");
  	}

  }
	
	return 0;
}
	