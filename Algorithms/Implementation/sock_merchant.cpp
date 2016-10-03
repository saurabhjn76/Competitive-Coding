#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int n,count,i,j,k,a[101];
	fill_n(a,101,0);
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&count);
		a[count]++;
	}
	count=0;
	for(i=0;i<=100;i++){
		if(a[i]>0){
			count+=a[i]/2;
		}
	}
	printf("%d\n", count);
	return 0;
}
	