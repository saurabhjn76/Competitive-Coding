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
 	int max1=0,min1=1000002;
 	vector<int> a[100001];
 	int b[100001];
 	int c[n];
 	int d[n];
 	fill_n(b,100001,0);
 	int l;
 	R(i,n){
 		s(l);
 		d[i]=l;
 		b[l]++;
 		a[l].push_back(i+1);
 		max1=max(l,max1);
 		min1=min(l,min1);
 	}
 	int k=0;
 	R(i,max1+1){
 		if(a[i].size()>0){
 			k=max(k,i+1);
 			R(j,a[i].size()){
 				for(;b[k]==0;k=(k+1)%(max1+1)){

 				}
 				c[a[i][j]-1]=k;
 				b[k]--;
 			}
 		}
 	}
 	int ans1=0;
 	R(i,n){
 		if(d[i]!=c[i]){
 			ans1++;
 		}
 	}
 	if(ans1==n){
 		printf("%d\n", ans1);
 	R(i,n){
 		printf("%d ",c[i]);
 	}  
 	printf("\n"); 
 	continue;
 	}
 	if(a[max1].size()==2){
 		int temp=c[a[max1][1]-1];
 		c[a[max1][1]-1]=c[a[min1][0]-1];
 		c[a[min1][0]-1]=temp;
 	}
 	int ans=0;
 	R(i,n){
 		if(d[i]!=c[i]){
 			ans++;
 		}
 	}
 	printf("%d\n", ans);
 	R(i,n){
 		printf("%d ",c[i]);
 	}  
 	printf("\n"); 
  }
	
	return 0;
}