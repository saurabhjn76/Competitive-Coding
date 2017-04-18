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
# define MAX 10000001
bool v[MAX];
ll len, sp[MAX];
vector<ll> primes;

void Sieve(){
	for (ll i = 2; i < MAX; i += 2)	sp[i] = 2;//even numbers have smallest prime factor 2
	for (ll i = 3; i < MAX; i += 2){
		if (!v[i]){
			sp[i] = i; primes.push_back(i);
			for (ll j = i; (j*i) < MAX; j += 2){
				if (!v[j*i])	v[j*i] = true, sp[j*i] = i;
			}
		}
	}
}
vector <int> factorize(int k) {
	vector <int> ans;
	while(k>1) {
		ans.push_back(sp[k]);
		k/=sp[k];
	}
	return ans;
}

int main()
{
	Sieve();
	ll abc[50];
  	ll a,b;
  	sl(a);sl(b);
  	ll j;
  	ll ans=0;
  	vector <ll> aa;
  	for(ll i=a;i<=b;i++){
  		aa.clear();
  		if(i==1){
  			ans+=0;
  			continue;
  		}
  		j=i;
  		while(j>=10000000){
  			while(j%2==0){
  				aa.push_back(2); j/=2;
  				if(j<=1)
  					break;
  			}
  			ll square_root = (ll) sqrt(j) + 1;
        ll kk;
        for(ll kk_it=1;kk_it<primes.size();kk_it++){
          kk=primes[kk_it];
          if(j<kk)
            break;
          while(j%kk==0){
            aa.push_back(kk);
            j/=kk;
            if(j<=1)
              break;
          }
          if(kk>=square_root+1 || kk_it==primes.size()-1){
            aa.push_back(j);
            j=1;
            break;
          }
        }
  			//printf("%lld\n",square_root );
         // kk=primes[primes.size()-1];
  			for(;kk<=square_root+1;kk+=2){
  				//printf("%lld\n", kk );
  				if(j<kk)
  					break;
  				while(j%kk==0){
  					aa.push_back(kk);
  					j/=kk;
  					if(j<=1)
  						break;
  				}
  				if(kk==square_root+1){
  					aa.push_back(j);
  					j=1;
  					break;
  				}
  			}

  		}
  		while(j>1) {
		aa.push_back(sp[j]);
		j/=sp[j];
		}
  		fill_n(abc,50,1);
  		int length=0;
  		abc[0]=2;
  		for(ll j=1;j<aa.size();j++){
  			if(aa[j]==aa[j-1]){
  				abc[length]++;
  			}
  			else
  				abc[++length]++;
  		}
  		length++;
  		ll prod=1;
  		R(j,length){
  			prod*=abc[j];
  		}
  		ans+=prod;
  		while(1){
  			sort(abc,abc+length,greater<ll>());
  			prod=prod/abc[0];
  			prod*=--abc[0];
  			if(prod<=1)
  				break;
  			else
  				ans+=prod;

  		}
  	}
  	printf("%lld\n",ans );

	
	return 0;
}
		