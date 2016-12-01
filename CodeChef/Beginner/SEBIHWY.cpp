#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	float i,j,k,l,m,n,p;
	int t;
	scanf("%d",&t);
	while(t--){
	scanf("%f %f %f %f %f",&i,&j,&k,&l,&m);
	float ans=i+l*180/m;
	//printf("%f\n",ans );
	if(fabs(j-ans)<fabs(k-ans)){
		printf("SEBI\n");
	}
	else if(fabs(j-ans)>fabs(k-ans))
	{
		printf("FATHER\n");
	}
	else
		printf("DRAW\n");
}
	return 0;
}
	