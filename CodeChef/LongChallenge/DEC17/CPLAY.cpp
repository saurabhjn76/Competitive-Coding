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
  while (!cin.eof())
{
	string s;
    cin >> s;
    int count_A=0,count_B=0;
    R(i,s.length()){
    	if(i%2==0){
    		if(s[i]=='1'){
    			count_A++;
    		}
		} else {
			if(s[i]=='1'){
				count_B++;
			}
		}
		if(i==5){
			if(count_A>count_B+2){
				printf("TEAM-A %d\n",i+1);
				break;
			} else if(count_B > count_A+2){
				printf("TEAM-B %d\n",i+1);
				break;
			}
		}
		if(i==6){
			if(count_A>count_B+2){
				printf("TEAM-A %d\n",i+1);
				break;
			} else if(count_B >=count_A+2){
				printf("TEAM-B %d\n",i+1);
				break;
			}
		}
		if(i==7){
			if(count_A>count_B+1){
				printf("TEAM-A %d\n",i+1);				
				break;
			} else if(count_B > count_A+1){
				printf("TEAM-B %d\n",i+1);
				break;
			}
		}
		if(i==8){
			if(count_A>count_B+1){
				printf("TEAM-A %d\n",i+1);				
				break;
			} else if(count_B >= count_A+1){
				printf("TEAM-B %d\n",i+1);
				break;
			}
		}
		if(i==9){
			if(count_A>count_B){
				printf("TEAM-A %d\n",i+1);
				break;
			} else if(count_B > count_A){
				printf("TEAM-B %d\n",i+1);
				break;
			}
		}
		if(i>9 && i%2==1){
			if(count_A >count_B) {
				printf("TEAM-A %d\n",i+1);
				break;
			} else if(count_B > count_A){
				printf("TEAM-B %d\n",i+1);
				break;
			}
		}
		if(i==19 && count_A==count_B){
			printf("TIE\n");
		}
    }
 
}
	
	return 0;
}