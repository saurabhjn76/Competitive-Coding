#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,k,l,n,t,id;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);
		int a[n+1],cc[n+1],dd[n+1];
		bool b[n+1];
		for(j=1;j<n+1;j++)
			{cc[j]=0;
				dd[j]=0;
			}
		int count=0,maxcount=0;
		for(j=1;j<n+1;j++)
		{
			scanf("%d",&a[j]);
			b[j]=false;
			cc[a[j]]++;

		}
		for(j=1;j<n+1;j++)
			printf("%d ",cc[j] );
		printf("\n");
		for(j=1;j<n+1;j++)
		{
			k=j;
			id=0;
			int prev=0;
			while(b[id]!=true && count<=n)
			{
				b[k]=true;
				dd[k]++;
				prev=k;
				k=a[k];
				if(dd[k]>1)
					{	count--;
						break;
					}
				dd[k]++;
				
				id=k;
				
				if(b[id])
				{
					for(int ll=1;ll<n+1;ll++)
					{
						if(a[ll]==prev && b[ll]==false && cc[prev]%2==0)
						{
							b[ll]=true;
							if(dd[ll]>1)
								{	count--;
									break;
								}
							dd[ll]++;
							
							count++;
							k=ll;
							id=ll;
							//printf("------%d\n",cc[prev] );
						}
					}
				}
				count++;
			}
			int sum=0;
			for(int ll=1;ll<n+1;ll++)
			{
				sum+=dd[ll];
			}
			if(b[k] && sum%2==0p)
			{
				if(maxcount<count)
				{
					maxcount=count;
				}
			}
			count=0;
			for(int ll=1;ll<n+1;ll++)
				if(b[ll])
				{
					printf("%d ",ll );
				}
				printf("\n");
			for(int ll=1;ll<n+1;ll++)
				{
					b[ll]=false;
					printf("%d ",dd[ll] );
					dd[ll]=0;
				}
				printf("\n");
		}
		printf("Case #%d: %d\n",i,maxcount );


	}
	return 0;
}