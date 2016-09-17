#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	long long int i,j,k,l,m,n;
	char a[101];
	scanf("%s",a);
	scanf("%lld",&n);
	l=strlen(a);
	long long int b[l+1];
	long long int count=0;
	b[0]=0;
	for(i=1;i<l+1;i++)
	{
		b[i]=0;
		if(a[i-1]=='a')
			count++;
		b[i]=count;

	}
	printf("%lld\n",(n/l)*b[l] + b[n%l]);

	return 0;
}
