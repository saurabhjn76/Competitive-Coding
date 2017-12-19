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
    int n;
    s(n);
    int a[n];
    R(i,n){
    	s(a[i]);
    }
    sort(a,a+n);
    int coun=1,j=0,coun2=1;
    for(int i=n-1;i>0;i--){
    	if(a[i]==a[i-1])
    		coun++;
    	else{
    		j=i;
    		break;
    	}
    }
    if(j==n-1){
    	for(int i=n-2;i>0;i--){
    		if(a[i]==a[i-1])
    			coun2++;
    		else
    			break;
    	}
    }
    double ans=0;
    if(coun!=1){
    	ans= (double) (coun*(coun-1))/(double)(n*(n-1));
    } else {
    	ans = (double) 2*(coun2)/(double) (n*(n-1));
    }
    printf("%lf\n",ans );
  }
	
	return 0;
}