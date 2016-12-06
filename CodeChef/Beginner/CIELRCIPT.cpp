#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		long long int n;
		scanf("%lld",&n);
		int count=0;
		for(int i=0;i<=11;i++){
			count+=n/(long long int)pow(2,11-i);
			n=n%(long long int)pow(2,11-i);

		}
		printf("%d\n",count );
	}
	return 0;
}
	