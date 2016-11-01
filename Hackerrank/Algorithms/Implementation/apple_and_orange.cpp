#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int r,i,j,k,l,a,b,m,n,count=0,t;
	scanf("%d %d",&l,&r);
	scanf("%d %d",&a,&b);
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
		scanf("%d",&t);
		if(a+t<=r && a+t>=l)
			count++;
	}
	printf("%d\n",count );
	count=0;
	for(i=0;i<n;i++){
		scanf("%d",&t);
		if(b+t<=r && b+t>=l)
			count++;
	}
	printf("%d\n",count );



	return 0;
}
