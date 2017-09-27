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
  int t;
  cin >> t;

  while(t--){
  	bool flag=false;
   int n; s(n);
   string s[2];
   cin >> s[0] >> s[1];
   string ss[2];
   ss[0]="." + s[0] + ".";
   ss[1] = "." + s[1] +".";
   int a[2][n];
   fill(a[0],a[0]+2*n,0);
   R(i,n){
   	if(ss[0][i]=='#'){
   		if(ss[0][i-1]=='#')
   			a[0][i]++;
   		if(ss[0][i+1]=='#')
   			a[0][i]++;
   		if(ss[1][i]=='#')
   			a[0][i]++;
   	}
   	if(ss[1][i]=='#'){
   		if(ss[1][i-1]=='#')
   			a[1][i]++;
   		if(ss[1][i+1]=='#')
   			a[1][i]++;
   		if(ss[0][i]=='#')
   			a[1][i]++;
   	}

   }
   R(i,n){
   	if(a[0][i]==3 || a[1][i]==3){
   		flag=true;
   		break;
   	}
   }
  }
	
	return 0;
}
	