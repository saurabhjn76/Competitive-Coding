#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{	
	int n,i,j,k;
	scanf("%d",&n);
	bool a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&j);
		if(j==1)
			a[i]=false;
		else
			a[i]=true;
	}
	int count=0;
	for(i=0;;)
	{
		if(a[i+2])
		{
			count+=1;
			i+=2;
		}
		else if(a[i+1]){
			count+=1;
			i+=1;
		}
		if(i>=n-1)
			break;
	}
	printf("%d\n",count );

	return 0;
}
	