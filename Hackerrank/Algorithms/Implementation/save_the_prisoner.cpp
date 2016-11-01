#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	long long int i,j,k,l,t,n,m,s;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld %lld",&n,&m,&s);
		i=m%n;
		i=(i+s-1)%n;
		if(i==0)
			printf("%lld\n",n );
		else
		printf("%lld\n",i );

	}
	return 0;
}
	