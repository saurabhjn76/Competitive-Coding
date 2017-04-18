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
  ll aa,bb,counter=0;
  int a[10];
  fill_n(a,10,0);
  sl(aa); sl(bb);
  R(i,10){
  s(a[i]);
	}
	bool allzero=true;
	R(i,10){
		if(a[i]!=0)
			{
				allzero=false;
				break;
		}
	}
	if(allzero){
		printf("%lld\n",bb-aa+1);
		continue;
	}
	else{
  FOR(i,aa,bb){
  	ll j=i;
  	int b[10];
  	fill_n(b,10,0);
  	while(j>0)
    {
       b[j%10]++;
       j=j/10;
    }
    R(k,10){
    	//printf("%d\n",a[k]);
    	if(a[k]==b[k])
    		break;
    	if(k==9)
    		counter++;
    }
  }
  printf("%lld\n",counter );
}

  }
	
	return 0;
}
	