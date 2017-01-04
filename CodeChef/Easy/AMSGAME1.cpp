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
   int n; 
   s(n); ll a[n];
   for(int i=0;i<n;i++)
   	sl(a[i]);
   ll gcdd = a[0];
   for(int i=1;i<n;i++){
   	gcdd=gcd(a[i],gcdd);
   }
   printf("%lld\n",gcdd);

  }
	
	return 0;
}
