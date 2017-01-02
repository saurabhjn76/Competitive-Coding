#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf("%c",&n)
# define sl(n)                       scanf("%lld",&n)
# define sf(n)                       scanf("%lf",&n)
# define ss(n)                       scanf("%s",n)

# define INF                         (int)1e9
# define EPS                         1e-9
# define MOD 1000000007


typedef long long ll;

int main()
{
  int t=1;
  //cin >> t;
  ll T[100000];
  T[0]=0;T[1]=1;T[2]=2;
  for(int i=3;i<100000;i++){
  	T[i]=2*T[i-1] + 3*T[i-3];
  }
 /* for( int i=0;i<7;i++)
  	printf("%lld ",T[i] );*/
  while(t--){
  	int n;
  	cin >> n;
  	ll a[n];
  	for(int i=0;i<n;i++){
  		cin >> a[i];
  	}
  	ll sum=0,f_sum=0,temp;
  	for (long long int len = 1; len <= n; ++len)
    {
        for (int start = 0; start+len <= n; ++start)
        {
            temp = 0;
            for (int i = 0; i < len; ++i)
            {
                temp += a[start + i]; //arr stores the original array of n digits
            }
          //  printf("%lld\n",temp );
            f_sum+=T[temp]%MOD;
            f_sum%=MOD;
        }
    }
  	printf("%lld",f_sum);
  }
	
	return 0;
}
	