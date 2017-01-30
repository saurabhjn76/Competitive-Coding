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
typedef struct Map
{
	ll index;
	ll pop;
}Map;
bool ComparePop (const Map& l,  const Map& r)
{
  return l.pop > r.pop;
}


int main()
{
  ll n,m;
  sl(n);sl(m);
  Map v[m];
  for(int i=0;i<m;i++){
  	sl(v[i].index);sl(v[i].pop);
  }
sort(v,v+m,&ComparePop);
/*for(int i=0;i<m;i++){
	printf("%lld %lld\n",v[i].index,v[i].pop);
}*/
	ll sum=0,ans=0;
	for(int i=0;i<m;i++){
		if(sum+v[i].index<n){
			sum+=v[i].index;
			ans+=v[i].index*v[i].pop;
		}
		else if(sum+v[i].index==n){
			sum+=v[i].index;
			ans+=v[i].index*v[i].pop;
			break;
		}
		else if(sum+v[i].index>n){
			ans+=v[i].pop*(n-sum);
			sum+=n-sum;
		}
		if(sum==n)
			break;

	}
	printf("%lld\n",ans);
	
	return 0;
}
	