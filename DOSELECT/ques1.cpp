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

typedef struct  factory
{
	ll a;
	ll b;
	ll c;
	float a_effi;
	float b_effi;

}factory;

bool compare_a(const factory &a, const factory &b)
{
    return a.a_effi > b.a_effi;
}

bool compare_b(const factory &a, const factory &b)
{
    return a.b_effi > b.b_effi;
}

int main()
{
  int t;
  cin >> t;
  while(t--){
 	int f,d;
 	s(f);s(d);
 	factory ff[f];
 	R(i,f){
 		sl(ff[i].a);
 	}
 		R(i,f){
 		sl(ff[i].b);
 	}
 		R(i,f){
 		sl(ff[i].c);
 	}
 	int best_a=0, best_b=0;
 	R(i,f){
 		ff[i].a_effi= (float)ff[i].a/ff[i].c;
 		ff[i].b_effi = (float)ff[i].b/ff[i].c;
 		if(ff[i].a_effi> ff[best_a].a_effi){
 			best_a=i;
 		}
 		if(ff[i].b_effi > ff[best_b].b_effi){
 			best_b =i;
 		}
 	}
 	// total input
 	ll Ra,Rb;
 	sl(Ra); sl(Rb);
 	ll cost=0;
 	int a_days = ceil(Ra/ff[best_a].a);
 	int b_days = ceil(Rb/ff[best_b].b);
 	ll remainging_b = Rb - a_days*ff[best_a].b;
 	ll remainging_a = Ra - b_days*ff[best_b].a;
 	int rem_days_b = 0; int rem_days_a = 0;
 	if(remainging_b>0){
 		rem_days_b = ceil(remainging_b/ff[best_b].b);
 	}
 	if(remainging_a>0){
 		rem_days_a = ceil(remainging_a/ff[best_a].a);
 	}
 	cost  = min(a_days*ff[best_a].c + rem_days_b*ff[best_b].c, b_days*ff[best_b].c + rem_days_a*ff[best_a].c);
 	if(cost>d){
 		printf("-1\n");
 	} else {
 		printf("%lld\n",cost );
 	}


  }
	
	return 0;
}