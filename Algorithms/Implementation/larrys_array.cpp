#include <bits/stdc++.h>
using namespace std;
int getInvCount(int arr[], int n)
{
  int inv_count = 0;
  for (int i = 0; i < n - 1; i++)
    for (int j = i+1; j < n; j++)
      if (arr[i] > arr[j])
        inv_count++;
 
  return inv_count;
}
int main()
{
	int i,j,k,n,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n];
		for ( i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}
		if(getInvCount(a,n)%2==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}

	}
	return 0;
}