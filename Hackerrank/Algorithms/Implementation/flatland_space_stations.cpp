#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007

int min(int a,int b){
	return a<b?a:b;
}

int main()
{
	int i,j,k,l,m,n;
	int MAX=100002;
	scanf("%d %d",&n,&k);
	bool a[n];
	int b[n];
	fill_n(a,n,false);
	
	
		for(i=0;i<k;i++)
		{
			scanf("%d",&j);
			a[j]=true;
		}
		for(i=0;i<n;i++)
		{
			if(a[i]){
				b[i]=0;
				MAX=0;
			}
			else{
				b[i]=MAX;
			}
			MAX++;
		}
		MAX=100002;
		for(i=n-1;i>=0;i--){
			if(a[i])
				MAX=0;
			if(b[i]>MAX){
				b[i]=MAX;
			}
			MAX++;
		}
		int max=b[0];
		for(i=1;i<n;i++)
		{
			//printf("%d ",b[i] );
			if(b[i]>max)
				max=b[i];
		}
		printf("%d\n",max);

	return 0;
}
	