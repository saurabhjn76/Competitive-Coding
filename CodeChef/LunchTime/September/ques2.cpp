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

int help(bool b[6][6], int c[6], int i, int j){
	bool bb[6][6];
	R(i,6){
		R(j,6){
			bb[i][j]=b[i][j];
		}
	}
	c[i]=j+1;
	R(x,6){
		if(x!=j){
			bb[i][x]=false;
		}
	}
	bool flag=true;
	R(k,6){
		if(c[k]==0){
			flag=false;
			break;
		}
	}
	if(flag){
		R(k,6){
			printf("%d ",c[k]);
		}
		printf("\n");
		return 1;
	}
	FOR(d,i+1,5){
		R(e,6){
			if(bb[d][e] && bb[e][d]){
 				if(help(bb,c,d,e)==1){
 					return 1;
 				} else {
 					bb[d][e]=false;
 					bb[e][d]=false;
 				}
 			}
		}
	}
	return 0;
}

int main()
{
  int t;
  cin >> t;
  while(t--){
 	bool b[6][6];
 	int c[6];
 	fill_n(c,6,0);
 	R(i,6){
 		R(j,6){
 			b[i][j]=true;
 		}
 		b[i][i]=false;
 	}
 	bool bg_flag=true;
 	int n;
 	s(n);
 	int a[n];
 	R(i,n){
 		s(a[i]);
 	}
 	R(i,n-1){
 		//printf("%d %d ",a[i],a[i+1] );
 		b[a[i]-1][a[i+1]-1]=false;
 		b[a[i+1]-1][a[i]-1]=false;
 		if(a[i]==a[i+1])
 			bg_flag=false;
 	}
 	if(!bg_flag){
 		printf("-1\n");
 		continue;
 	}
	bool nc_flag=false;

 	R(i,6){
 		R(j,6){
 			if(b[i][j] && b[j][i]){
 				if(help(b,c,i,j)==1){
 					nc_flag=true;
 					i=7;
 					j=7;
 					break;
 				} else {
 					b[i][j]=false;
 					
 				}
 			}
 		}
 	}
 	if(!nc_flag){
 		printf("-1\n");
 	}
 	
 	
 	}
 	
	
	return 0;
}