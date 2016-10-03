#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int i,j,k,l,m,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int count=0;
	int index_first=-1;
	int index_second=-1;
	for(i=0;i<n;i++){
		if(a[i]%2==1 && index_first==-1){
			index_first=i;
		}
		else if(a[i]%2==1 && index_first!=-1 && index_second==-1){
			index_second=i;
			count+=2*(index_second-index_first);
			index_first=-1;
			index_second=-1;
		}
	}
	if(index_first!=-1 && index_second==-1){
		printf("NO\n");
	}
	else
	{
		printf("%d\n",count );
	}
	return 0;
}
	