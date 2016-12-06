#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		int max=1;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]>max)
				max=a[i];
		}
		//printf("%d\n",max);
		int count=0;
		for(;max>=1;max--){
			count=0;
			for(int i=0;i<n;i++){
				if((a[i]%max)!=0){
						break;
				}
				else
					count++;
			}
			if(count==n){
				break;
			}
		}
		//printf("%d\n",max);
		for(int i=0;i<n;i++){
			printf("%d ",a[i]/max);
		}
		printf("\n");
	}
	return 0;
}
	