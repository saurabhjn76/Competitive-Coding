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
bool prime[1000000000+1];
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
   
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++) 	
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    /*for (int p=2; p<=n; p++)
       if (prime[p])
          cout << p << " ";*/
}
int main()
{
  int t;
  cin >> t;
  SieveOfEratosthenes(1000000000);
  prime[1]=false;
  while(t--){
  ll m ,n;
  sl(m);sl(n);
  for(ll i=m;i<n+1;i++)
  	if(prime[i])
  		printf("%lld\n",i );
  	printf("\n");
  }
	
	return 0;
}
	