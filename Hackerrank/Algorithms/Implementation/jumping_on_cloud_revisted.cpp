#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int n,i,j,k;
	scanf("%d %d",&n,&k);
	bool a[n];
	int E=100;
	for(i=0;i<n;i++)
	{
		scanf("%d",&j);
		if(j==1)
			a[i]=false;
		else
			a[i]=true;
	}
	i=0;
	do{
		if(a[i]){
			E--;
		}
		else{
			E-=3;
		}
	i=(i+k)%n;
	}while(i%n!=0);
	printf("%d\n",E);
	return 0;
}
	