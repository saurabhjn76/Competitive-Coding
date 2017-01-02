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
  int n;
  s(n);
  int a[n];
  for(int i=0;i<n;i++)
  	s(a[i]);
  int lo=0,inv=0;
  for(int i=0;i<n-1;i++){
  	if(a[i]>a[i+1])
  		lo++;
  }
  for(int i=0;i<n-1;i++){
  	for(int j=i+1;j<n;j++){
  		if(a[i]>a[j])
  			inv++;
  	}
  }
  if(inv==lo)
  	printf("YES\n");
  else
  	printf("NO\n");
  }
	
	return 0;
}
	