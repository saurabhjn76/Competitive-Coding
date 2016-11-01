#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	
	int i,j,k,l,m=5;
	scanf("%d",&k);
	int ans=0,fans=0;
	for(i=1;i<=k;i++){
		ans=floor(m/2);
		fans+=ans;
		m=ans*3;
	}
	printf("%d\n",fans );

	return 0;
}
	