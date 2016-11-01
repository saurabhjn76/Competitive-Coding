#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	long long int t,k,l;
	scanf("%lld",&t);
	long long int i=1,j=3;
	while(t>=i){
		i+=j;
		j=2*j;
	}
	j=j/2;
	i-=j;
	printf("%lld\n",j-(t-i) );


	return 0;
}
	