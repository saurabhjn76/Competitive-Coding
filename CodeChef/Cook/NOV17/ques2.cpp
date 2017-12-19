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

typedef struct node {
	ll val;
	int pos_i;
	int pos_j;
}node;

int g_count;
bool compare(const node &a, const node &b)
{
    return a.val > b.val;
}

void traverse(bool **b,int m,int n, ll **a,int i,int j) {
	if(i-1>=0 && !b[i-1][j] ) {
		if(a[i][j]>=a[i-1][j]){
			b[i-1][j]=true;
			g_count++;
			traverse(b,m,n,a,i-1,j);
		}
	}
	if(j-1>=0 && !b[i][j-1] ) {
		if(a[i][j]>=a[i][j-1]){
			b[i][j-1]=true;
			g_count++;
			traverse(b,m,n,a,i,j-1);
		}
	}
	if(i+1<n && !b[i+1][j] ) {
		if(a[i][j]>=a[i+1][j]){
			b[i+1][j]=true;
			g_count++;
			traverse(b,m,n,a,i+1,j);
		}
	}
	if(j+1< m && !b[i][j+1] ) {
		if(a[i][j]>=a[i][j+1]){
			b[i][j+1]=true;
			g_count++;
			traverse(b,m,n,a,i,j+1);
		}
	}
	return;
}	

int main()
{
  int t;
  cin >> t;
  while(t--){
 	int n,m;
 	g_count=0;
 	s(n);s(m);
 	ll **a = (ll**) calloc(n,sizeof(ll*));
 	R(i,n){
 		a[i]=(ll*) calloc(m,sizeof(ll));
 	}
 	vector<node> v;
 	node v1;
 	int ans=0;
 	//bool b[n][m];
 	bool ** b =(bool **) calloc(n,sizeof(bool*));
 	R(i,n){
 		b[i]= (bool *) calloc(m,sizeof(bool));
 	}
 	R(i,n){
 		R(j,m){
 			b[i][j]=false;
 			sl(a[i][j]);
 			v1.val=a[i][j];
 			v1.pos_j=j;
 			v1.pos_i=i;
 			v.push_back(v1);
 		}
 	}
 	
 	sort(v.begin(),v.end(),compare);
 	R(i,v.size()){
 		if(g_count==m*n)
 			break;
 		if(!b[v[i].pos_i][v[i].pos_j]){
 			ans++;
 			b[v[i].pos_i][v[i].pos_j]=true;
 			traverse(b,m,n,a,v[i].pos_i,v[i].pos_j);
 		}
 	}

 	printf("%d\n", ans );






  }
	
	return 0;
}