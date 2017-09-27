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
vector<int> v;
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        for (int i=0; i<nums.size(); i++) {
            if (!dq.empty() && dq.front() == i-k) dq.pop_front();
            while (!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();
            dq.push_back(i);
            if (i>=k-1) ans.push_back(nums[dq.front()]);
        }
        return ans;
    }

int main()
{
  int n,k,p;
  s(n);s(k);s(p);
  int a[n];
  R(i,n){
  	s(a[i]);
  }
  string s;
  cin >> s;
  vector<int> b;
  int count=0;
  R(i,k){
  	if(a[i]==1)
  		count++;
  }
  b.push_back(count);
  for(int i=1;i<n;i++){
  		if(a[i-1]==1)
  			count--;
  		if(a[(i+k-1)%n]==1)
  			count++;
  		b.push_back(count);
  }
  /*R(i,b.size()){
  	printf("%d\n",b[i] );
  }*/
  for(int i=0;i<n-k;i++){
  	b.push_back(b[i]);
  }
  if(n<=1000 && k<=1000 && p<=1000){
  	int rem=0;
  	R(i,s.length()){
  		if(s[i]=='?'){
  			int maxx=0,cou=0;
  			for(int i=rem;cou<n-k+1;i=(i+1)%n){
  				cou++;
  				if(maxx<b[i]){
  					maxx=b[i];
  				}
  			}
  			printf("%d\n",maxx);
  		}
  		else{
  			rem--;
  			if(rem<0){
  				rem+=n;
  			}
  		}
  	}	
  }
  else{
  vector<int> ans=maxSlidingWindow(b,n-k+1);
  int rot=0;
  R(i,s.length()){
  	if(s[i]=='?'){
  		printf("%d\n",ans[rot%n]);
  	}
  	else{
  		rot--;
  		if(rot<0){
  			rot+=n;
  		}
  	}
  }
}

	
	return 0;
}
	