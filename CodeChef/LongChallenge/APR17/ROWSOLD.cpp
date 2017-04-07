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
  string a;
  cin >> a;
  ll sum=0;
  ll count_one=0;
  ll left_one=0;
  R(i,a.length()){
  	if(a[i]=='1')
  		count_one++;
  	else{
  		if(count_one!=0){
  		left_one+=count_one;
  		sum+=left_one;
  		count_one=0;
  		}
  	}
  }
ll right_zero=0;
FORD(i,a.length()-1,0){
	if(a[i]=='0'){
		right_zero++;
	}else{
		sum+=right_zero;
	}
}
printf("%lld\n",sum );
  }
	
	return 0;
}
	