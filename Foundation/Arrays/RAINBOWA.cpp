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
 	int a[n+1];
 	int ab[100];
 	fill_n(ab,n,0);
 	R(i,n){
 		s(a[i]);
 		if(a[i]<=7)
 		ab[a[i]-1]++;
 	} 
 	int j;
 	bool flag =true;
 	int sum=0;
 	R(i,7){
 		sum+=ab[i];
 		if(ab[i]<=0)
 			flag=false;
 	}
 
 	//printf("%d\n",sum );
 	if(sum!=n)
 	{
 		flag=false;
 		

 	} else {
 	R(i,n){
 		j=n-1-i;
 		if(a[i]!=a[j]){
 		//	printf("%d %d %d %d\n",i,j,a[i],a[j]);
 			flag=false;
 			break;
 		}

 	}
 	bool flag2=true;
 	
 	R(i,n-1){
 		if(a[i]==7)
 			flag2=false;
 		if(flag2){
 			if(a[i+1]-a[i]>1){
 			//	printf("%d--\n",i );
 				flag=false;
 				break;
 			}
 		} else {
 			if(a[i]-a[i+1]>1){
 				flag=false;
 				//printf("%d\n",i );
 				break;
 			}
 		}
 			
 	}
 }
 if(flag){
 	printf("yes\n");
 } else
 printf("no\n");
 	
  }
	
	return 0;
}