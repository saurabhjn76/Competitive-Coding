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

ll **dp;
ll *mapp,*ss;
ll n,m;
ll rec(ll k, ll num){
	if(k == n) return (num<n ? 0 : 1);
	if(dp[k][num] != -1) return dp[k][num];
	if(mapp[k] == -1){
		dp[k][num] = rec(k+1, k+1) + rec(k+1, num);
		if(k+1 < n && (mapp[k+1] == -1 || mapp[k+1] == num)) dp[k][num] += rec(k+2, k+1);
		dp[k][num] %= MOD;
		return dp[k][num];
	}
	else if(mapp[k] == k+1) return dp[k][num] = rec(k+1, num);
	else if(mapp[k] == k+2 && k+1 < n && (mapp[k+1] == -1 || mapp[k+1] == num)) return dp[k][num] = rec(k+2, k+1);
	else if(mapp[k] == num) return dp[k][num] = rec(k+1, k+1);
	else return dp[k][num] = 0;
}
int main()
{
	dp =(ll **) malloc(10005*sizeof(ll*));
	mapp = (ll *) malloc(10005*sizeof(ll));
	ss =(ll *) malloc(10005*sizeof(ll));
	R(i,10005){
		dp[i] = (ll*) malloc(10005*sizeof(ll));
	}
	int tt;cin>>tt;
	while(tt--){
		memset(dp,-1,sizeof(dp));
		memset(mapp,-1,sizeof(mapp));
		memset(ss,-1,sizeof(ss));
		bool ok = true;
		cin>>n>>m;
		ll x,y;
		int pof=0;
		for(int i=0;i<m;i++){
			cin>>x>>y;
			x--;y--;
			if(mapp[x]!=-1 && mapp[x]!=y){ok= false;}
			if(ss[y]!=-1 && ss[y]!=x){ok= false;}
			if(mapp[x]!=-1) pof++;
			mapp[x]=y;
			ss[y]=x;
		}
		m=m-pof;
		if(!ok){
			printf("0\n");
			continue;
		}
		ll bob=1;
		for(ll t=2;t<=n-m;t++){
			bob=bob*t%MOD;
		}
		cout<<(bob-rec(0,0)+MOD)%MOD<<endl;
	}
	return 0;
} 