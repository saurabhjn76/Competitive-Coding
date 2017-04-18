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
  	string s;
  	cin>> s;
  	int a[s.length()];
  	R(j,s.length()){
  		a[j]=s[j]-'0';
  		//printf("%d",a[j] );
  	}
  	//printf("\n");
  	FORD(j,s.length()-1,1){
  		if(a[j]<a[j-1]){
  			a[j]=9;
  			a[j-1]--;
  		}
  	}
  	printf("Case #%d: ",i+1);
  	int k=0;
  	for(k=0;a[k]==0;k++){}
  	for(int j=k;j<s.length()-1;j++){
  		if(a[j]>a[j+1])
  			a[j+1]=9;
  	}
  	for(k;k<s.length();k++){
  		printf("%d",a[k] );
  	}
  	printf("\n");
  }
	
	return 0;
}
	