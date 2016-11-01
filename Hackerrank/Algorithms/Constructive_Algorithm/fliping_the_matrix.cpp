#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007

int max(int a,int b,int c,int d)
{
	if(a>=b && a>=c && a>=d)
		return a;
	if(b>=a && b>=c && b>=d)
		return b;
	if(c>=a && c>=b && c>=d)
		return c;
	if(d>=a && d>=c && d>=b)
		return d;
	return 0;
}

int main()
{
	int i,j,k,l,m,n,t;
	scanf("%d",&t);
	while(t--)
	{
		int sum=0;
		scanf("%d",&n);
		int a[2*n][2*n];
		for(i=0;i<2*n;i++){
			for(j=0;j<2*n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				sum+=max(a[i][j],a[2*n-i-1][j],a[i][2*n-j-1],a[2*n-i-1][2*n-j-1]);
				//printf("%d\n",max(a[i][j],a[2*n-i-1][j],a[i][2*n-j-1],a[2*n-i-1][2*n-j-1]));

			}
		}
		printf("%d\n",sum );
	}
	return 0;
}
	