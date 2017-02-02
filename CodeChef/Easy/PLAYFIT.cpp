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

void sort_by_marks(int data[][2], int n){
  pair<int, int>*ptr = (pair<int, int>*) data;
  sort(ptr, ptr+n);
}
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
  int t;
  cin >> t;
  while(t--){
   int n;s(n); Map v[n]; R(i,n) { sl(v[i].pop); v[i].index=i;}
   sort(v,v+n,&ComparePop);
   ll max=0;
   R(i,n-1){
   	FORD(j,n-1,i+1)
   	if(v[i].pop-v[j].pop>max && v[i].index > v[j].index){
   		//printf("%lld %lld \n",v[i].pop,v[j].pop );
   		max=v[i].pop-v[j].pop;
   		i=n;
   		break;
   	}
   }
   if(max==0)
   	printf("UNFIT\n");
   else
   	printf("%lld\n",max );

  }
	
	return 0;
}
	