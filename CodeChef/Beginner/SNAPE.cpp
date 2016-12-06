
#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d %d",&a,&b);
		printf("%f %f\n",sqrt(b*b-a*a),sqrt(b*b+a*a));
	}	
	return 0;
}
