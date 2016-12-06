#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007
#define N 100001


int main()
{
	int flag=0;
	long int a[N+1];
	while(flag==0){
		long int i,j,k,l,n,t;
		scanf("%ld",&n);
		if(n==0)
			return 0;
		for(i=1;i<=n;i++){
			scanf("%ld",&a[i]);
		}
		
			
		for(i=1;i<=n;i++){
			if(a[a[i]]!=i)
			{
				printf("not ambiguous\n");
				break;
			}

		}
		if(i>n)
			printf("ambiguous\n");
	}
	return 0;
}
	