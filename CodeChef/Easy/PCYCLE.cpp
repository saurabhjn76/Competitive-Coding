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

int main()
{
  int t=1;
  //cin >> t;
  while(t--){
  	int n;
  	s(n);
  	int a[n];
  	bool b[n];
  	fill_n(b,n,false);
  	int count=0;
  	for(int i=0;i<n;i++){
  		s(a[i]);
  	}
  
  	for(int i=0;i<n;i++){
  		if(!b[i]){
  			int ss=i;
  			while(!b[ss]){
  				b[ss]=true;
  				ss=a[ss]-1;
  			}
  			count++;
  		}
  	}
  	printf("%d\n",count );
  	fill_n(b,n,false);
  	for(int i=0;i<n;i++){
  		
  		if(!b[i]){
  			for(int j=0;j<n;j++)
  			if(i==a[j]-1)
  			{
  				b[j]=true;
  				printf("%d ",i+1);
  			}
  			int ss=i;
  			while(!b[ss]){
  				printf("%d ",a[ss]);
  				b[ss]=true;
  				ss=a[ss]-1;
  				
  			}
  			printf("%d\n",a[ss] );
  			
  			
  		}
  	}
  	
  }
	
	return 0;
}
	