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
 string s;
 cin >> s;
 int l =s.length();
 std::vector<int> v[26];
 int count=0;
 R(i,s.length()){
 	v[s[i]-'a'].push_back(i);
 }

 int m[26][26];
 R(i,26){
 	R(j,26){
 		m[i][j]=0;
 	}
 }
R(i,26){
	if(v[i].size()>0){
	R(j,26){
		if(v[j].size()>0){
		R(k,v[i].size()){
				int mn=0;
				while(mn < v[j].size() && v[i][k] >= v[j][mn] ){
					mn++;
				}
				m[i][j]+=v[j].size()-mn;
		}
		}
	}
	}
}
int ans=0;
R(i,26){
	R(j,26){
		ans=max(ans,m[i][j]);
	}
}
printf("%d\n",ans );


	
	return 0;
}