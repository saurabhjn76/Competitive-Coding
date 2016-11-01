#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	int a[101];
	for(i=0;i<101;i++)
		a[i]=0;
	for(i=0;i<n;i++){
		scanf("%d",&k);
		a[k]++;
	}
	sort(a,a+101,greater<int>());
	/*for(i=0;i<n;i++){
		printf("%d ",a[i] );
	}*/
	printf("%d\n",n-a[0]);
	return 0;
}
	