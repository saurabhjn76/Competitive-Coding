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

double dis(double x,double y,double x1,double y1){
	return sqrt(pow((x-x1),2)+pow((y-y1),2));
}
int main()
{
  int t=1;
  while(t--){
  	int n,k;
  	s(n);s(k);
  	double dist[n];
  	double xx,yy;
  	for(int i=0;i<n;i++){
  		sf(xx);sf(yy);
  		dist[i]=dis(xx,yy,0,0);
  	}
  	sort(dist,dist+n);
  	printf("%lf\n",dist[k-1]);
  }
	
	return 0;
}
	