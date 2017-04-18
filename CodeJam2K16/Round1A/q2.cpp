#include <bits/stdc++.h>
using namespace std;

int main()
{
	int o,j,k,l,t,i,n;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);
		int a[2501],b[n];
		for(j=0;j<2501;j++)
			a[j]=0;
		for(j=0;j<2*n-1;j++)
		{
			for(k=0;k<n;k++)
			{
				scanf("%d",&o);
				a[o]++;
			}
		}
		l=0;
		for(j=0;j<2501;j++)
		{
			//printf("%d ",a[j] );
			if(a[j]%2==1)
			{
				b[l++]=j;
			}
		}
		sort(b,b+l);
		printf("Case #%d: ",i );
		for(j=0;j<l ;j++)
		{
			printf("%d ",b[j] );
		}
		printf("\n");

	}
	return 0;
}