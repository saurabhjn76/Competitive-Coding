#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int t;
	unsigned long long int i,j,k,l,m,n,b,min,max=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %lld %lld",&n,&k,&b);
		min=(b*(b+1))/2;
		max=(b*k)-((b*(b-1))/2);
		if(n<=max && n>=min){
			m=(n-min)/b;
			l=(n-min)%b;
			for(i=1;i<b;i++){
				if(i+l>b)
					printf("%lld ",i+m+1);
				else
					printf("%lld ",i+m );
			}
			if(i+l>b)
			printf("%lld",i+m+1);
				else
					printf("%lld",i+m );
			printf("\n");
		}
		else
			printf("-1\n");
	}
	return 0;
}
	