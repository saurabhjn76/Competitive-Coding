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
  int t;
  cin >> t;
  for(int ff=1;ff<=t;ff++){
  int n;
  s(n);
  int a[n];
  for(int i=0;i<n;i++){
  	s(a[i]);
  }
  sort(a,a+n);
  int count=0,tt=0;
  for(int i=n-1;i>=tt;i--){
  	//printf("%d\n",(int)(50/a[i])+ (50%a[i]==0 ? 0:1) );
  	if((int)(50/a[i])+ (50%a[i]==0 ? 0:1)>1){
  		//printf("true -%d\n",(int)(50/a[i])+ (50%a[i]==0 ? 0:1) );
  		if(tt+(int)(50/a[i])+ (50%a[i]==0 ? 0:1)-1<=i){
  			count++;
  			//for(int j=tt;j<tt+(int)(50/a[i])+ (50%a[i]==0 ? 0:1)-1;j++)
  				//printf("%d ",a[j]);
  			tt+=(int)(50/a[i])+ (50%a[i]==0 ? 0:1)-1;
  			//printf("%d\n",a[i]);
  		}
  	}
  	else
  		count++;
  }
  printf("Case #%d: %d\n",ff,count );
  }
	
	return 0;
}
	