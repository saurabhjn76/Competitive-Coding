#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf(" %c",&n)
# define sl(n)                       scanf("%lld",&n)
# define sf(n)                       scanf("%lf",&n)
# define ss(n)                       scanf("%s",n)

# define INF                         (int)1e9
# define EPS                         1e-9
# define MOD 1000000007


typedef long long ll;

int main()
{
  int t;
  cin >> t;
  while(t--){
  int n,m;
  s(n);s(m);
  char a[n][m];
  for(int i=0;i<n;i++){
  	for(int j=0;j<m;j++){
  		sc(a[i][j]);
  	}
  }
  bool flag=true;
  for(int i=0;i<n;i++){
  	for(int j=0;j<m;j++){
  		switch(a[i][j]){
  			case 'W': if(j==m-1 || i==n-1 || j==0)
  						{
  							//printf("%d %d\n",i,j);
  							flag=false;j=m;i=n;break;}
  						else{
  							if(!((a[i+1][j]=='B' || a[i+1][j]=='W') && (a[i][j+1]=='B' || a[i][j+1]=='W') && (a[i][j-1]=='B' || a[i][j-1]=='W'))){
  								//printf("dasd\n");
  								flag=false;j=m;i=n;break;
  							}
  						}

  			break;
  			case 'B': if(i!=n-1){
  				if(a[i+1][j]=='A')
  				{flag=false;j=m;i=n;break;}
  			}
  			break;
  		}
  	}
  }
  if(flag)
  	printf("yes\n");
  else
  	printf("no\n");
  }
	
	return 0;
}
	