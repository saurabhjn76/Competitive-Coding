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
 	int n,p;
 	s(n);s(p);
 	if(n==1){
 		printf("1 a\n");
 	} else if(n==2){
 		if(p==1){
 			printf("2 aa\n");
 		} else {
 			printf("1 ab\n");
 		}
 	} else {
 		if(p>2){
 			printf("1 ");
 			string ss="abc";
 			R(i,n){
 				printf("%c",ss[i%3]);
 			}
 			printf("\n");
 		} else if (p==1){
 			printf("%d ",n);
 			R(i,n){
 				printf("%c",'a');
 			}
 			printf("\n");
 		} else if(p==2){
 			if(n>8){
 				printf("4 ");
 				string ss="aababb";
 				R(i,n){
 				printf("%c",ss[i%6]);
 			}
 			printf("\n");
 			} else if(n>4){
 				printf("3 ");
 				string ss="aaababbb";
 				R(i,n){
 				printf("%c",ss[i%8]);
 			}
 			printf("\n");
 			} else if(n==3 || n==4){
 				printf("2 ");
 				string ss="aabb";
 				R(i,n){
 				printf("%c",ss[i%8]);
 			}
 			printf("\n");
 			}

 		}
 	}
  }
	
	return 0;
}