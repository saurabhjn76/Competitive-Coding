#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf(" %c",&n)
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
  	int r,c; s(r);s(c);
  	char a[r][c],ab,curr;
  	R(j,r){
  		curr ='?';
  		R(k,c){
  			sc(ab);
  			//printf("\t%c\n",ab);
  			if(ab!='?'){
  				curr=ab;
  			}
  			a[j][k]=curr;
  		}
  		FORD(k,c-1,0){
  			if(a[j][k]!='?'){
  				curr=a[j][k];
  				//printf("%c\n",a[j][k] );
  			}
  			if(a[j][k]=='?'){
  				a[j][k]=curr;
  			}
  		}
  	}
  	/*R(j,r){
  		R(k,c){
  			printf("%c",a[j][k] );
  		}
  		printf("\n");
  	}*/
  	curr='?';
  	char ccc[c];
  	ccc[0]='?';
  	R(j,r){
  		if(a[j][0]!='?'){
  			R(k,c){
  				ccc[k]=a[j][k];
  			}
  		}
  		if(ccc[0]!='?' && a[j][0]=='?'){
  			R(k,c){
  				a[j][k]=ccc[k];
  			}
  		}
  	}
  	

  	ccc[0]='?';
  	FORD(j,r-1,0){
  		if(a[j][0]!='?'){
  			R(k,c){
  				ccc[k]=a[j][k];
  			}
  		}
  		if(ccc[0]!='?' && a[j][0]=='?'){
  			R(k,c){
  				a[j][k]=ccc[k];
  			}
  		}
  	}
  	printf("Case #%d:\n",i+1);
  	R(j,r){
  		R(k,c){
  			printf("%c",a[j][k] );
  		}
  		printf("\n");
  	}

  }
	
	return 0;
}
	