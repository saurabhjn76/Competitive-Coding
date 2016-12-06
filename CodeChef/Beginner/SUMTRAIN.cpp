#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int n;
	scanf("%d",&n);
	while(n--){
		int a[101][101];
		int i,j,k,l,t;
		scanf("%d",&t);
		for(i=0;i<t;i++){
			for(j=0;j<=i;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(i=t-2;i>=0;i--){
			for(j=0;j<=i;j++){
				a[i][j]+=a[i+1][j] > a[i+1][j+1] ?  a[i+1][j]:a[i+1][j+1];
			}
		}
		/*for(i=0;i<t;i++){
			for(j=0;j<=i;j++){

			}
		}*/
		printf("%d\n",a[0][0]);
	}
	return 0;
}
	