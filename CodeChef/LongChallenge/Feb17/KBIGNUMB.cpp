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
ll extendedEuclid(ll a, ll b, ll *x, ll *y)	{
    ll t, d;
    if (b == 0)	{
        *x = 1; *y = 0; return a;
    }
    d = extendedEuclid(b, a % b, x, y);
    t = *x; *x = *y; *y = t - (a/b)*(*y);
    return d;
}
ll modInverse(ll a, ll n)  {
    ll x, y;
    extendedEuclid(a, n, &x, &y);
    return (x < 0) ? (x + n) : x;
}
/* Iterative Function to calculate (x^n)%p in O(logy) */
ll power(ll x,ll y, ll p)
{
    int res = 1;      // Initialize result
 
    x = x % p;  // Update x if it is more than or 
                // equal to p
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;  
    }
    return res;
}
ll GetNumberOfDigits (ll i)
{
    return i > 0 ? (ll) log10 ((double) i) + 1 : 1;
}
 ll gcd( ll a, ll b)
{
     ll rem,max,min;

 //printf("Enter the TWo no. for HCF calculation \n");
 // scanf("%d%d",&a,&b);
 if(a>=b){   
  max=a;
  min=b;
  }
 else{
  max=b;
  min=a;
  }
 while(min!=0){
    rem=max%min;
    max=min;
    min=rem;
    }
 // printf("The hcf of given number %d & %d is :%d\n",a,b,max);
 return max;
 }

int main()
{
  int t;
  cin >> t;
  while(t--){
  ll a,n,m;
 // printf("%lld\n",power(10,6,99) );
   sl(a);sl(n);sl(m);
   ll dig=GetNumberOfDigits(a);
   ll inter= power(10,dig,m)-1;
   if(inter<0){
   	inter+=m;
   }
   ll gc = gcd(inter,m);
   ll po=power(10,dig*n,m)-1;
   ll inv=modInverse(inter/gc,m/gc);
  // printf("%lld\n",(a%m)*(po%m));
   //printf("%lld\n",inv);
   ll ans=0;
   if(po==0 && inv==0)
   	ans=((a%m)*(n%m))%m;
   else
    ans=((((a%m)*(power(10,dig*n,m)-1))%m)*modInverse(inter/gc,m/gc))%m;
   if(ans<0)
   	ans+=m;
   printf("%lld\n",ans);
  //printf("%lld\n",modInverse(3,11) );
 // printf("%d %d %d %d %d %ld\n",12%17,1212%17,121212%17,12121212%17,1212121212%17,121212121212%17 );
  }
	
	return 0;
}
	