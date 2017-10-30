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
   int n,l;
    s(n);
   ll max_ans=0;
    vector<ll> v[n];
    vector<ll> sum[n];
    int a[n];
    if(n==2){
        int max1=-1, min1=1000001,max2=-1,min2=1000001;
        int xy;
        R(i,n){
            s(l);
            R(j,l){
                s(xy);
                if(i==0){
                    max1=max(max1,xy);
                    min1=min(min1,xy);
                } else {
                    max2=max(max2,xy);
                    min2=min(min2,xy);
                }
            }
        }
        printf("%d\n", max(abs(max1-min2),abs(min1-max2)));
        continue;     
    }
        int max1=-1, min1=1000001,max2=-1,min2=1000001;
    R(i,n){
        s(a[i]);
        R(j,a[i]){
            s(l);
            if(i==0){
                    max1=max(max1,l);
                    min1=min(min1,l);
                }
            v[i].push_back(l);
            sum[i].push_back(0);
        }
    }
    R(j,a[1]){
        sum[1][j]=max(max(abs(v[1][j]-max1),abs(v[1][j]-min1)),sum[1][j]);
    }
    FOR(i,2,n-1){
        R(j,v[i].size()){
            R(k,v[i-1].size()){
                sum[i][j]=max(abs(v[i][j]-v[i-1][k])*i+sum[i-1][(k+1)%a[i-1]],sum[i][j]);
            }
        }
    }
    R(i,a[n-1]){
    max_ans=max(max_ans,sum[n-1][i]);
 
    }
    printf("%lld\n",max_ans);
  }
    
    return 0;
} 