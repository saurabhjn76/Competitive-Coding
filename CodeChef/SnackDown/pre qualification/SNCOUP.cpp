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
  while(t--){
  	int n;
  	s(n);
  	string a[2];
  	bool fence[n+1];
  	fill_n(fence,n+1,false);
  	cin >> a[0] >> a[1];
  	vector<int> r1,r2;	
  	R(i,n){
  		if(a[0][i]=='*')
  			r1.push_back(i);
  		if(a[1][i]=='*')
  			r2.push_back(i);
  	}
  	int count=0;
  	if(r1.size()>0 && r2.size()>0){
  		fence[n]=true;
  		count++;
  	}
  
  	for(int i=0,j=0;i<r1.size()-1||j<r2.size()-1;){
  		if(i+1<r1.size() && j+1<r2.size()){
  			if(r1[i+1]<r2[j]){
  				fence[r1[i+1]-1]=true;
  				count++;i++;		//    eg 1-3 && 4 -5  disjoint
  			}
  			else if(r2[j+1]<r1[i]){
  				fence[r2[j+1]-1]=true;
  				count++;j++;		// eg 4-5 && 1-3 disjoint
  			}

  			else if(r1[i]<=r2[j] && r2[j+1]<=r1[i+1]){
  				fence[r2[j+1]-1]=true;
  				i++;j++;count++;			// fully overlapping eg 1-5 && 2-3
  			}

  			else if(r2[j]<=r1[i] && r1[i+1]<=r2[j+1]){
  				fence[r1[i+1]-1]=true;
  				i++;j++;count++;			// fully overlapping eg 2-3 && 1-5
  			}
  			else if(r1[i]<=r2[j] && r1[i+1]<r2[j+1]){
  				fence[r1[i+1]-1]=true;
  				i++;count++;                  // partial overlappint interval eg 1 4 && 2 5
  			}
  			else if(r2[j]<=r1[i] && r2[j+1]<r1[i+1]){
  				fence[r2[j+1]-1]=true;
  				j++;count++;                  // partial overlappint interval eg 2 5 && 1 4
  			}

  		}
  		if(i<r1.size() && j>=r2.size()-1){
  			count+=r1.size()-1-i;
  			i=r1.size();
  		}
  		if(j<r2.size() && i>=r1.size()-1){
  			count+=r2.size()-1-j;
  			j=r2.size();
  		}	

  	}
  	printf("%d\n",count );
  }
	
	return 0;
}
	