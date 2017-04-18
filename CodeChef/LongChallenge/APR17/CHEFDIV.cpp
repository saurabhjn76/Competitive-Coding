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
ll prime[1000000+1];
ll next[1000000+1];
void SieveOfEratosthenes(ll n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
   
    fill_n(prime, n+1,2);
    prime[0]=0;
    prime[1]=1;
    fill_n(next,n+1,1);
 
    for (ll p=2; p*2<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
          // Update all multiples of p
            for (ll i=p*2; i<=n; i += p){
                	prime[i]++;
                	if(prime[p]>=prime[next[i]]){
                		next[i]=p;
                	}

                }
    }
 
    // Print all prime numbers
    /*for (int p=2; p<=n; p++)
          cout << prime[p] << " ";
      printf("\n");
       for (int p=2; p<=n; p++)
          cout << next[p] << " ";*/
}

ll treeTraverse(ll n){
	if(n==1)
		return 1;
	else return prime[n] + treeTraverse(next[n]);
}

ll findfactors(ll n){
  if(n>1000000-1){
    ll ans=2;
    ll next_num=1;
    ll next_prime_num=1;
    ll square_root = (ll) sqrt(n) + 1;
    ll ma1;
    ll ma2;
    for(ll m=2;m<square_root;m++){
      if (n%m == 0 && m*m!=n){
        ans+=2;
        ma1=findfactors(m);
        ma2=findfactors(n/m);
        if(next_num<ma1){
          next_num=ma1;
          next_prime_num=m;
        }
        else if(next_num<ma2){
          next_num=ma2;
          next_prime_num=n/m;
        }
      }
     if (n % m == 0&& m*m==n){
        ans+=1;
        ma1=findfactors(m);
        if(next_num<ma1){
          next_num=ma1;
          next_prime_num=m;
        }
      }
    }
  //  printf("%lld\n",next_prime_num );
    return ans + next_num;
  }
  else
    return treeTraverse(n);
}

int main()
{
  SieveOfEratosthenes(1000000);
 // printf("%lld\n",next[932451] );
  ll a,b;
  sl(a);sl(b);
  ll sum=0;
  FOR(i,a,b){
  	sum--;
  	sum+=findfactors(i);
  }
  printf("%lld\n",sum);
	
	return 0;
}
	