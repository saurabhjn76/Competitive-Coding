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
  string s1;
  cin >> s1;
  while(t--){
  string s2;
  cin >> s2;
  for(int i=0;i<s2.length();i++){
  	if(s2[i]>=65 && s2[i]<=65+25){
  		printf("%c",s1[s2[i]-65]-97+65 );
  	}
  	else if(s2[i]=='_')
  		printf(" ");
  	else if(s2[i]>=97 && s2[i]<=97+25){
  		printf("%c",s1[s2[i]-97]);
  	}
  	else
  		printf("%c",s2[i] );
  }
  printf("\n");
  }
	
	return 0;
}
	