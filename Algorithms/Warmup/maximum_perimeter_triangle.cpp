#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int i,j,n,k,l;
	scanf("%d",&n);
	long int a[n];
	for(long int i=0;i<n;i++){
		scanf("%ld",&a[i]);

	}
	sort(a,a+n);
	for(i=n-1;i>1;i--){
		for(j=i-1;j>0;j--){
			for(k=j-1;k>=0;k--){
				if(a[i]+a[j]>a[k] && a[i]+a[k]>a[j]  && a[j]+a[k]>a[i])
				{
					printf("%ld %ld %ld\n",a[k],a[j],a[i]);
					return 0;
				}
			}
		}
	}
	printf("-1\n");
	return 0;
}
	