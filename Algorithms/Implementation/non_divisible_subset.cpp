#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007

int max(int a,int b){
	return a>b?a:b;
}

int main()
{
	int n,k,i,j,count=0;
	long int s;
	scanf("%d %d",&n,&k);
	int a[k];
	for(int i=0;i<k;i++)
		a[i]=0;
	for(i=0;i<n;i++){ 
		scanf("%ld",&s);
		a[s%k]++;
	}
	/*for(i=0;i<k;i++)
		printf("%d ",a[i] );
	printf("\n");*/
	for(i=1;i<=k/2;i++)
	{	
		if(2*i!=k)
		count+=max(a[i],a[k-i]);
		else if(2*i==k)
			count++;
	}
	if(a[0]>0)
		count++;
	printf("%d\n",count);
	
	return 0;
}
	