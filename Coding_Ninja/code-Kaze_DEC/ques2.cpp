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
int minn=MOD;
int func(int n,int p,int q,int steps){
	if(n<0)
		return 0;
	if(n==0)
	{
		if(steps<minn)
			minn=steps;
		return 0;
	}
	int ss=p;
	while(1){
		func(n-ss,p,q,steps+1);
		ss*=p;
		if(ss>n)
			break;
	}
	ss=q;
	while(1){
		func(n-ss,p,q,steps+1);
		ss=ss*q;
		if(ss>n)
			break;
	}
}
int min(int a,int b){
	return a<b?a:b;
}
int main()
{
  int t=1;
  //cin >> t;
  while(t--){
  	ll n,p,q;
  	sl(n);sl(p);sl(q);
  	ll a[n+1];
  	fill_n(a,n+1,9900000);
  	//printf("%d\n",a[0] );
  	//int d=func(n,p,q,0);
  //	printf("%d\n",minn );
  	ll steps=1;
  	a[0]=0;
  	ll ss=1;
  	for(int i=0;i<=n;i++){
  		while(i+ss<=n){
  			a[i+ss]=min(a[i]+1,a[i+ss]);
  			ss=ss*p;
  			if(p==1)
  				break;
  		}
  		ss=1;
  		while(i+ss<=n){
  			a[i+ss]=min(a[i]+1,a[i+ss]);
  			ss=ss*q;
  			if(q==1)
  				break;
  		}
  		//printf("%d ",a[i]);
  	}
  	printf("%lld\n",a[n] );


  }
	
	return 0;
}
	