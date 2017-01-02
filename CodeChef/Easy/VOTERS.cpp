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
  int aa[ 5000002];
  fill_n(aa, 5000002,0);
  while(t--){
  	int a,b,c,d;
  	s(a);s(b);s(c);
  	for(int i=0;i<a+b+c;i++){
  		s(d);	
  		aa[d]++;
  	}	
  	int count=0;
  	for(int i=0;i<5000002;i++){
  		if(aa[i]>=2)
  			count++;
  	}
  	printf("%d\n",count );
  	for(int i=0;i<5000002;i++){
  		if(aa[i]>=2)
  			printf("%d\n",i);
  	}
  }
	
	return 0;
}
	