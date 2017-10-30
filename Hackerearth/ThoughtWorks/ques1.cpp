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
 R(kk,t){
    int n; s(n);
    int a[n];
   vector<int> v;
    int sum=0;
    R(i,n){
    	s(a[i]);
    	sum+=a[i];
    	if(i==0 || a[i]==1){
    		v.push_back(a[i]);
    	}
    		if(v[(int)v.size()-1]!=a[i]){
    			v.push_back(a[i]);
    		}
    }

    if(v[0]==v[(int)v.size()-1]){
    	v.pop_back();
    }
    if(sum==n){
    	printf("%d\n",n );
    	continue;
    }
    bool flag2=false;
    R(i,n-1){
    	if(!(a[i]==a[i+1] && a[i]==n)){
    		break;
    	}
    	if(i==n-2){
    		printf("1\n");
    		flag2=true;
    		break;
    	}
    }
    if(flag2){
    	continue;
    }
    int right[n];
    int left[n];
    int count=0;
    bool flag=false;
    int j;
    R(i,n){
    	int cd=0;
    	if(a[i]==1){
    		right[i]=0;
    		left[i]=0;
    	} else {
    		int k=i+1;
    		while(k!=i && a[k%n]==a[i]){
    			cd++;
    			k++;
    		}
    		right[i]=cd;
    		cd=0;
    		k=i-1;
    		if(k<0){
    				k+=n;
    			}
    		while(k!=i && a[k%n]==a[i]){
    			cd++;
    			k--;
    			if(k<0){
    				k+=n;
    			}
    		}
    		left[i]=cd;
    		cd=0;
    	}
    }
    // R(i,n){
    // 	printf("%d-%d left=%d right=%d\n",a[i],i,left[i],right[i] );
    // }
    R(i,n){
    	if(a[i]<=1+left[i]+right[i]){
    		continue;
    	} else {
    		flag=true;
    		break;
    	}
    }
    if(flag){
    	printf("Invalid Data\n");
    } else{
    	printf("%ld\n",v.size() );
    }

  }
	
	return 0;
}