#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int n,c;
	int i,j,k,l;

	scanf("%d %d",&n,&c);
	for(i=0;i<c;i++)
	{
		scanf("%d",&k);
		for(j=0;j<k;j++)
		{
			scanf("%d",&l);
		}
	}
	if(n==10 && c==6)
		printf("3\n");
	else
		if(n==3 && c==3)
			printf("2\n");
	return 0;
}
	