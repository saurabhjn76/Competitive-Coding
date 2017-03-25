#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf(" %c",&n)
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
char a[50][50];

bool checkneighbourEmpty(int n, int i, int j){
	if(i+1<n)
		if(a[i+1][j]!='.')
			return false;
	if(i-1>=0)
		if(a[i-1][j]!='.')
			return false;
	if(j+1<n)
		if(a[i][j+1]!='.')
			return false;
	if(j-1>=0)
		if(a[i][j-1]!='.')
			return false;
	return true;
}
bool checkneighbourCursed(int n, int i, int j){
	bool flag=false;
	if(i+1<n)
		if(a[i+1][j]=='C')
			flag=true;
	if(i-1>=0)
		if(a[i-1][j]=='C')
			flag=true;
	if(j+1<n)
		if(a[i][j+1]=='C')
			flag=true;
	if(j-1>=0)
		if(a[i][j-1]=='C')
			flag=true;
	return flag;
}
bool check(int n){
	R(i,n){
		R(j,n){
			if(a[i][j]=='G'){
				if(i+1<n)
					if(a[i+1][j]!='.')
						return false;
				if(i-1>=0)
					if(a[i-1][j]!='.')
						return false;
				if(j+1<n)
					if(a[i][j+1]!='.')
						return false;
				if(j-1>=0)
					if(a[i][j-1]!='.')
						return false;
			}
		}
	}
	R(i,n){
		R(j,n){
			if(a[i][j]=='P'){
				if(i+1<n)
					if(a[i+1][j]=='G'|| a[i+1][j]=='B')
						return false;
				if(i-1>=0)
					if(a[i-1][j]=='G' || a[i-1][j]=='B')
						return false;
				if(j+1<n)
					if(a[i][j+1]=='G' || a[i][j+1]=='B')
						return false;
				if(j-1>=0)
					if(a[i][j-1]=='G' || a[i][j-1]=='B')
						return false;
			}
		}
	}
	R(i,n){
		R(j,n){
			if(a[i][j]=='B'){
				if(i+1<n)
					if(a[i+1][j]=='G'|| a[i+1][j]=='P')
						return false;
				if(i-1>=0)
					if(a[i-1][j]=='G' || a[i-1][j]=='P')
						return false;
				if(j+1<n)
					if(a[i][j+1]=='G' || a[i][j+1]=='P')
						return false;
				if(j-1>=0)
					if(a[i][j-1]=='G' || a[i][j-1]=='P')
						return false;
			}
		}
	}
	return true;
}

void changed(int n){
	int change=0;
	R(i,n){
		R(j,n){
			if(a[i][j]=='P'){
				if(i+1<n)
					if(a[i+1][j]=='?')
						{ a[i+1][j]='P'; change++;}
				if(i-1>=0)
					if(a[i-1][j]=='?')
						{ a[i-1][j]='P'; change++;}
				if(j+1<n)
					if(a[i][j+1]=='?')
						{ a[i][j+1]='P'; change++;}
				if(j-1>=0)
					if(a[i][j-1]=='?')
						{ a[i][j-1]='P'; change++;}
			}
		}
	}
	R(i,n){
		R(j,n){
			if(a[i][j]=='G'){
				if(i+1<n)
					if(a[i+1][j]=='?')
						{ a[i+1][j]='G'; change++;}
				if(i-1>=0)
					if(a[i-1][j]=='?')
						{ a[i-1][j]='G'; change++;}
				if(j+1<n)
					if(a[i][j+1]=='?')
						{ a[i][j+1]='G'; change++;}
				if(j-1>=0)
					if(a[i][j-1]=='?')
						{ a[i][j-1]='G'; change++;}
			}
		}
	}
	R(i,n){
		R(j,n){
			if(a[i][j]=='B'){
				if(i+1<n)
					if(a[i+1][j]=='?')
						{ a[i+1][j]='B'; change++;}
				if(i-1>=0)
					if(a[i-1][j]=='?')
						{ a[i-1][j]='B'; change++;}
				if(j+1<n)
					if(a[i][j+1]=='?')
						{ a[i][j+1]='B'; change++;}
				if(j-1>=0)
					if(a[i][j-1]=='?')
						{a[i][j-1]='B'; change++;}
			}
		}
	}
	if(change==0)
		return ;
	else{	
		changed(n);
		//return ;
	}
}

void curse(int n){
	int change=0;
	R(i,n){
		R(j,n){
			if(a[i][j]=='C'){
				if(i+1<n)
					if(a[i+1][j]=='?')
						{ a[i+1][j]='C'; change++;}
				if(i-1>=0)
					if(a[i-1][j]=='?')
						{ a[i-1][j]='C'; change++;}
				if(j+1<n)
					if(a[i][j+1]=='?')
						{ a[i][j+1]='C'; change++;}
				if(j-1>=0)
					if(a[i][j-1]=='?')
						{ a[i][j-1]='C'; change++;}
			}
		}
	}
	if(change==0)
		return ;
	else{	
		curse(n);
		//return ;
	}
}

int main()
{
  int t;
  cin >> t;
  while(t--){
  int n; s(n);
  ll ans=1;
  
  R(i,n){
  	R(j,n){
  		sc(a[i][j]);
  	}
  }
  changed(n);
  if(!check(n)){
  	printf("0\n");
  }
  else{
  	R(i,n){
  		R(j,n){
  			if(a[i][j]=='?'){
  				if(checkneighbourEmpty(n,i,j)){
  					ans*=3;
  					ans%=MOD;
  				}
  				else{
  				if(checkneighbourCursed(n,i,j)){
  					a[i][j]='C';
  				}
  				else{
  					ans*=2;
  					ans%=MOD;
  					if(i+1<n)
						if(a[i+1][j]=='?')
							a[i+1][j]='C';
					if(i-1>=0)
						if(a[i-1][j]=='?')
							a[i-1][j]='C';
					if(j+1<n)
						if(a[i][j+1]=='?')
							a[i][j+1]='C';
					if(j-1>=0)
						if(a[i][j-1]=='?')
							a[i][j-1]='C';
					curse(n);

  				}
  			}
  			}
  			
  		}
  	}
  	printf("%lld\n",ans );
  }
  }
	
	return 0;
}
	