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
  int n=2*1000000+2;
  int a[2*1000000+3];
ll fin_sum[1000000+1]; 

int main()
{
  int t;

  ll ans_sum=0;
  
  R(j,n+1){
  	int sum_even=0,sum_odd=0,count=0;
  	int i=j;
  		while(i>0){
  			if((i%10)%2==0){
  				sum_even+=i%10;
  			} else {
  				sum_odd+=i%10; 
  			}
  			i/=10;
  			count++;
  		}
  		a[j]=abs(sum_odd-sum_even);
  }
  ans_sum+=10;
  fin_sum[0]=0;
  fin_sum[1]=2;
  fin_sum[2]=12;
  for(int i=3;i<1000001;i++){
  	ans_sum+=-2*a[i]+a[2*i]+a[2*i-2]+2*a[2*i-1];
  	fin_sum[i]=fin_sum[i-1]+ans_sum;
  }
  
  cin >> t;
  while(t--){
  	int m;
  	s(m);
  	printf("%lld\n",fin_sum[m] );
  }
 	
	return 0;
}