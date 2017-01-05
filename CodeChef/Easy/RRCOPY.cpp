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
  s(n);
  bool a[100002];
  fill_n(a,100002,false);
  for(int i=0;i<n;i++){
  	s(k); a[k]=true;
  }
  int count=0;
  for(int i=0;i<100002;i++)
  	if(a[i])
  		count++;
  	printf("%d\n",count);

  }
	
	return 0;
}
	