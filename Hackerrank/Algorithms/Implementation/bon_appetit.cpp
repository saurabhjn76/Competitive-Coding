#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int n,i,j,k,l,t;
	scanf("%d %d",&n,&k);
	int sum=0;
	int charged=0;
	for(i=0;i<n;i++)
	{
		if(i==k){
			scanf("%d",&l);
		}
		else{
			scanf("%d",&t);
			sum+=t;
		}
	}
	scanf("%d",&charged);
	if(charged-sum/2==0)
		printf("Bon Appetit\n");
	else
		printf("%d\n",charged-sum/2);
	return 0;
}
	