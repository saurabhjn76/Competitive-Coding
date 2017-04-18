#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007

int a[27];
int max(int n)
{
	int maxx=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]>maxx)
			maxx=a[i];
	}
	return maxx;
}
bool check(int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]!=0)
			return true;
	}
	return false;
}
int countt(int maxxx,int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==maxxx)
			count++;
	}
	return count;
}



int main()
{
	int i,j,t;
	scanf("%d",&t);
	int n,l;
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);
		int maxxx=0;
		for(j=0;j<n;j++)
			scanf("%d",&a[j]);
		printf("Case #%d: ",i);
		while(check(n))
		{
			maxxx=max(n);
			if(countt(maxxx,n)==1 || countt(maxxx,n)>2)
			{
				for(j=0;j<n;j++)
				{
					if(a[j]==maxxx)
						break;
				}
				printf("%c ",j+65 );
				a[j]--;
			}
			else if(countt(maxxx,n)==2)
			{
				int temp_count=0,first_index=0;
				for(j=0;j<n;j++)
				{
					if(a[j]==maxxx && temp_count==1)
						break;
					else if(a[j]==maxxx && temp_count==0)
					{
						first_index=j;
						temp_count++;
					}
				}
				printf("%c%c ",first_index+65,j+65);
				a[first_index]--;
				a[j]--;
			}


		}


		printf("\n");
	}

	return 0;
}
	