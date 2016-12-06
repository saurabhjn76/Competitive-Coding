#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int i,j,k,t,n,m;
	string s;
	int sum;
	scanf("%d",&t);
	while(t--){
		sum=0;
		scanf("%d",&n);
		int a[n];
		cin >> s;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		if(s=="Dee" && sum%2==0 && n==1)
			printf("Dee\n");
		else
			printf("Dum\n");

	}
	return 0;
}
