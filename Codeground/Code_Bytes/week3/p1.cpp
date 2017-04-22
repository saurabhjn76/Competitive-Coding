#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007

	bool custom[100001];
	bool check(int c)
{
	for(int j=0;j<c;j++)
	{
		if(!custom[j])
			return false;
	}
	
	return true;
}

int main()
{
	int i,j,k,n,c,t,max_sum=0,max_i=0,min_count=0;
	scanf("%d %d",&n,&c);
	bool a[c][n],b[n];

	for(i=0;i<c;i++)
		{
		custom[i]=false;
			for(j=0;j<n;j++)
			a[i][j]=false;
	}

	for(i=0;i<c;i++)
	{
		scanf("%d",&t);
		for(j=0;j<t;j++)
		{
			scanf("%d",&k);
			a[i][k]=true;
		}
	}
	for(i=0;i<n;i++)
	{
		int sum=0;
		for(j=0;j<c;j++)
		{
			if(a[j][i])
				sum++;
		}
		b[i]=sum;
		if(sum>max_sum)
		{
			max_sum=sum;
			max_i==i;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d-%d\n",i,b[i] );
		if(b[i]==1)
			{min_count++;
				//printf("%d--",i );
			for(j=0;j<c;j++)
			{
				if(a[j][i])
					custom[j]=true;
			}
		}

	}
	if(check(c))
	{
		printf("%d\n",min_count );
		return 0;
	}
	for(j=0;j<c;j++)
		{
			if(a[j][max_i])
		{
			custom[j]=true;
		}
	}
	min_count++;
	if(check(c))
	{
		printf("%d\n",min_count );
	}
	
	





	return 0;
}
