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
  int t;
  cin >> t;
  while(t--){
  	int n,k;
  	s(n);s(k);
  	int a[n];
  	for(int i=0;i<n;i++)
  		s(a[i]);
  	sort(a,a+n);
  	int sum=0,rest=0,sum2=0,rest2=0;
  	for(int i=0;i<k;i++){
  		sum+=a[i];
  	}
  	for(int i=k;i<n;i++){
  		rest+=a[i];
  	}
  	for(int i=0;i<k;i++){
  		sum2+=a[n-1-i];
  	}
  	rest2=sum+rest-sum2;

  	printf("%d\n",abs(sum-rest)>abs(sum2-rest2)?abs(sum-rest):abs(sum2-rest2) );

  }
	
	return 0;
}
	