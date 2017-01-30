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
	vector<int> v[20000];

void calc_path(int a,vector<int> path){
		if(v[a].size()==0)
			return ;
		else{
			for(int i=0;i<v[a].size();i++){
				
			}
		}
}

int main()
{
  int t;
  cin >> t;
  while(t--){
  	int n,m,j,k,x,y;
  	s(n);s(m);
  
  	int a[m];
  	for(int i=1;i<n+1;i++){
  		s(j);
  		for(int k=0;k<j;k++){
  			s(x);
  			v[i].push_back(x);
  		}
  		sort(v[i].begin(), v[i].end(), greater<int>());
  	}
  	for(int k=0;k<m;k++)
  		s(a[k]);
  	sort(a,a+m);
  	vector<int> path[m];	
  	for(int i=0;i<m;i++){
  		calc_path(a[i],path[i]);
  	}


  }
	
	return 0;
}
	