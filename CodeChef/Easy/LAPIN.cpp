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
  	string s;
  	cin >> s;
  	int a[27];
  	fill_n(a,27,0);
  	for(int i=0;i<s.length();i++){
  		if(i<s.length()/2)
  		a[s[i]-97]++;
  		else if(i > s.length()/2 || (s.length()%2==0 && i==s.length()/2))
  			a[s[i]-97]--;
  	}
  	for(int i=0;i<27;i++){
  		if(a[i]!=0)
  		{
  			printf("NO\n");
  			break;
  		}
  		else if(i==26)
  		{
  			printf("YES\n");
  		}
  	}

  }
	
	return 0;
}
	