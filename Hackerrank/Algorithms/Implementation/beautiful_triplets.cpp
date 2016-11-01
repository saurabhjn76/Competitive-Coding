#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int i,j,k,n,d;
	bool a[200000];
	fill_n(a,200000,false);
	scanf("%d %d",&n,&d);
	int b[n];
	int count=0;
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
		a[b[i]]=true;
	}
	for(i=0;i<n;i++){
		if(a[b[i]] && a[b[i]+d] && a[b[i]+2*d])
			count++;
	}
	printf("%d\n",count );
	return 0;
}
	