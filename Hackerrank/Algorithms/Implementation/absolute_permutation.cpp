
#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	
	int t,i,j,k,l,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);
		int a[n+1];
		if(k==0)
		{
			for(i=1;i<n+1;i++)
				printf("%d ",i);
			printf("\n");
			continue;
		}
		if(n%k==0 && (n/k)%2==0)
		{
			for(i=0;i<(n/k)/2;i++)
			{
				int count=0;
				for(j=2*k*i+1;j<2*k*(i+1)+1;j++)
				{
					if(count<k)
					{
						a[j+k]=j;
					}
					else
						a[j-k]=j;
					count++;
				}
			}
			for(i=1;i<n+1;i++)
				printf("%d ",a[i] );
			printf("\n");
		}
		else
			printf("-1\n");
	}
	return 0;
}
	