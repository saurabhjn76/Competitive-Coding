#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,i,j,l,m,pagenum=1,count=0;
	scanf("%d %d ",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(j=1;j<=a[i];j++)
		{
			
				
				if(j==pagenum)
				
				{	//printf("%d %d\n",pagenum,i );
					count++;
				}
				if(j%k==0)
					pagenum++;
		}
		if(a[i]%k!=0)
			pagenum++;

	}
	printf("%d\n",count );
	return 0;
}