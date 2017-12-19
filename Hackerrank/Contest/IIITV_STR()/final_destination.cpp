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

 ll binaryToDecimal(string n,ll k)
{
    string num = n;
    ll dec_value = 0;
     
    // Initializing base value to 1, i.e 2^0
    ll base = 1;
     
    ll len = num.length();
    for (int i=len-1;i>=0;i--)
    {
        if (num[i] == '0')
        {
            dec_value += 0*base;
            base = base * 2;
            base%=k;
        }
        else
        {
            dec_value += 1*base;
            dec_value%=k;
            base = base * 2;
            base%=k;
        }
    }
     
    return dec_value;
}

int main()
{
  int t;
  cin >> t;
  while(t--){
  	string s;
    cin >>s;
    ll m;
    sl(m);
     ll v = binaryToDecimal(s,m);
    ll cou=1;
    while(v%m==0){
    		m++;
    	if(cou==1){
    		v=binaryToDecimal(s,m);
    	}
    	printf("%lld\n",v );

    	if(cou%2==1){
    		v=(((4%m)*(v%m))%m+2)%m;
    	} else {
    		v=(((4%m)*(v%m))%m+3)%m;
    	}
    
    	cou=(cou+1)%MOD;
    }
    printf("%lld\n",cou);
  }
	
	return 0;
}