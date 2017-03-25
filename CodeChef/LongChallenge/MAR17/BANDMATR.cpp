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
  int t,a;
  cin >> t;
  while(t--){
  	int n,count1=0; s(n);
  	R(i,n){
  		R(j,n){
  			s(a);
  			if(a==1) count1++;
  			
  		}
  	}
  	if(count1<=n)
  		printf("0\n");
  	else{
  		count1-=n;
  	FORD(i,n-1,1){
  		count1-=2*i;
  		if(count1<=0){
  			printf("%d\n",n-i);
  			break;
  		}
  	}
  } 
  }
	
	return 0;
}
	