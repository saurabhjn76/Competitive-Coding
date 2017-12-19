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
  while(t--){
    int n,m;
    s(n);s(m);
    ll R[n][2], B[m][2];
    double sum_rx=0,sum_ry=0,sum_bx=0,sum_by=0,centRx=0,centRy=0,centBx=0,centBy=0;
    R(i,n){
    	sl(R[i][0]); sl(R[i][1]);
    	sum_rx+=R[i][0];
    	sum_ry+=R[i][1];
    }
    R(i,m){
    	sl(B[i][0]); sl(B[i][1]);
    	sum_bx+=B[i][0];
    	sum_by+=B[i][1];
    }
    centRx=sum_rx/n;
    centRy=sum_ry/n;
    centBx=sum_bx/m;
    centBy=sum_by/m;
    int ans1=0, ans2=0;
    R(i,n){
    	if(pow(R[i][0]-centRx,2) + pow(R[i][1]-centRy,2) < pow(R[i][0]-centBx,2) + pow(R[i][1]-centBy,2)){
    		//printf("%d\n",i );
    		ans1++;
    	}
    }
  //  printf("----\n");
     R(i,m){
    	if(pow(B[i][0]-centRx,2) + pow(B[i][1]-centRy,2)  > pow(B[i][0]-centBx,2) + pow(B[i][1]-centBy,2)){
    		ans2++;
    		//printf("%d\n",i );
    	}
    }
    printf("%d\n",min(ans1,ans2) );
  }
	
	return 0;
}