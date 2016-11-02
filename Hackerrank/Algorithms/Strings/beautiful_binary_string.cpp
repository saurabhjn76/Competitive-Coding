#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int i,j,k,l,m,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%1d",&a[i]);
	}
	int count=0;
	for(i=0;i<n-2;i++){
		if(a[i]==0){
			if(a[i+1]==1){
				if(a[i+2]==0){
					a[i+2]=1;
					count++;
					i=i+2;
				}
			}
		}
	}
	printf("%d\n",count );
	return 0;
}
	