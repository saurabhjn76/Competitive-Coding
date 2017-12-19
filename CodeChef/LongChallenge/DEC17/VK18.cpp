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
	int L=40;
	int a[L][L];
	{
	//R(L,20){
  R(i,L){
  	R(j,L){
  		a[i][j]=i+j+2;
  	//
  		//printf("%d ",a[i][j]);
  	}
  	
  //	printf("\n");
  }
 printf("-----------------\n");
  int sum=0;
  R(i,L){
  	R(j,L){
  		int sum_even=0,sum_odd=0,count=0;
  		while(a[i][j]>0){
  			if((a[i][j]%10)%2==0){
  				sum_even+=a[i][j]%10;
  			} else {
  				sum_odd+=a[i][j]%10; 
  			}
  			a[i][j]/=10;
  			count++;
  		}
  		a[i][j]=abs(sum_odd-sum_even);
  		sum+=a[i][j];
  		if(j<=i)
  		printf("%d ",a[i][j] );
  	}
 	printf("\n");
  }
  printf("%d-%d\n",L,sum );
}


	
	return 0;
}