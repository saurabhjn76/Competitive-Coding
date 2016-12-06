#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		long long int a,b;
		scanf("%lld %lld",&a,&b);
		printf("%lld %lld\n",a>b?a:b,a+b );
	}
	return 0;
}
	