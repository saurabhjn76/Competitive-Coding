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
  int t,i;
  cin >> t;
  while(t--){
   int n,m,curr_x,curr_y;
   s(n);s(m);
   string cmd;
   cin >> cmd;
   for(i=0;i<n;i++){
   	R(j,m){
   		curr_x=i; curr_y=j;
   		bool flag=true;
   		R(k,cmd.length()){
   			switch(cmd[k]){
   				case 'R': curr_y++;break;
   				case 'L': curr_y--; break;
   				case 'U': curr_x--; break;
   				case 'D': curr_x++; break;
   			}
   			if(curr_x<0 || curr_x>n-1 ||curr_y<0 || curr_y>m-1)
   			{
   				flag=false;
   				break;
   			}
   		}
   		if(flag){
   			printf("safe\n");
   			i=n+3;
   			break;
   		}
   	}
   }
   if(i!=n+4)
   	printf("unsafe\n");
  }
	
	return 0;
}
	