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
    int b[7];
    fill_n(b,7,0);
    string a[n];
    R(i,n){
    	cin>> a[i];
    	if(a[i]=="cakewalk"){
    		b[0]++;

    	} else if(a[i]=="simple"){
    		b[1]++;
    		
    	} else if(a[i]=="easy"){
    	b[2]++;	
    	}
    	else if(a[i]=="easy-medium"){
    		b[3]++;
    	} else if(a[i]=="medium"){
    		b[4]++;
    	}
    	else if(a[i]=="medium-hard"){
    		b[5]++;
    	} else if(a[i]=="hard"){
    		b[6]++;
    	}
    }
    if(b[0]>0 && b[1]>0 && b[2] >0 && (b[3]>0 || b[4] > 0) && (b[5] > 0 || b[6] > 0)) {
    	printf("Yes\n");
    } else {
    	printf("No\n");
    }

  }
	
	return 0;
}