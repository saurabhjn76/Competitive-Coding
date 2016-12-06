#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		long long int sum=0;
		long long int n;
		scanf("%lld",&n);
		while(n!=0){
			sum+=n%10;
			n/=10;
		}
		printf("%lld\n",sum );
	}
	return 0;
}
	