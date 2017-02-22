#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf("%c",&n)
# define sl(n)                       scanf("%lld",&n)
# define sf(n)                       scanf("%lf",&n)
# define ss(n)                       scanf("%s",n)

#define R(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

# define INF                         (int)1e9
# define EPS                         1e-9
# define MOD 1000000007


typedef long long ll;

int main()
{
  int t=1;
  // cin >> t;
  while(t--){
  	int n,m,r,x;
  	s(n);s(m);
  	char a[7];
  	int row[n], col[n];
  	fill_n(row,n,0);
  	fill_n(col,n,0);
  	R(i,m){
  	ss(a); s(r); s(x);
  	if(a[0]=='R'){
  		row[r-1]+=x;
  	}
  	else
  		col[r-1]+=x;
  	}
  	int max_row=0,max_col=0;
  	R(i,n){
  		if(row[i]>max_row)
  			max_row=row[i];
  		if(col[i]>max_col)
  			max_col=col[i];
  	} 
  	printf("%d\n",max_row + max_col ); 
  }
	
	return 0;
}
	