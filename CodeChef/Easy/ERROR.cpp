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
  while(t--){
  string ss;
  cin >> ss;
  bool flag=false;
  //printf("%ld\n",ss.length() );
  for(int i=0;i<(int)ss.length()-2;i++){
  		//printf("%d\n",i );
  		if(ss[i]=='1'){
  			if(ss[i+1]=='0'){
  				if(ss[i+2]=='1'){
  					flag=true;
  					break;
  				}
  			}
  		}
  		if(ss[i]=='0'){
  			if(ss[i+1]=='1')
  				if(ss[i+2]=='0'){
  					flag=true;
  					break;
  				}
  		}
  }
  if(flag)
  	printf("Good\n");
  else
  	printf("Bad\n");
  }

	
	return 0;
}
	