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

int main()
{
  int t;
  cin >> t;
  R(i,t){
  	int n,p;
  	s(n);s(p);
  	int a[n];
  	int lower[n];
  	int upper[n];
  	R(j,n){
  		s(a[j]);
  		lower[j]=(a[j]*9)/10;
  		upper[j]=a[j]*1 + a[j]/10;
  	}
  	int np[n][p];
  	int abc;
  	R(j,n){
  		R(k,p){
  			s(abc);
  			if(0==(abc%lower[j]))
  			 	np[j][k]=abc/lower[j];
  			else if(abc%a[j]==0)
  				np[j][k]=abc/a[j];
  			//printf("ss%d\n",abc%lower[j] );
  			else if(0==(abc%upper[j]))
  			  	np[j][k]=abc/upper[j];
  			else
  				np[j][k]=0;

  		}
  	}
  	R(j,n){
  		sort(np[j],np[j]+p);
  	}
  	R(j,n){
  		R(k,p){
  			printf("%d ",np[j][k] );
  		}
  		printf("\n");
  	}
  //	printf("%d %d\n",np[0][0],np[1][0] );
  	printf("Case #%d: ",i+1);
  }
	
	return 0;
}
	