#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int i,j,k,l,m,n,min=1000;
	scanf("%d",&n);
	int a[n][2];
	for(i=0;i<n;i++){
		scanf("%d",&m);
		a[i][0]=m;
		a[i][1]=i;
	}
qsort(a, n, sizeof(*a),
        [](const void *arg1, const void *arg2)->int
        {
            int const *lhs = static_cast<int const*>(arg1);
            int const *rhs = static_cast<int const*>(arg2);
            return (lhs[0] < rhs[0]) ? -1
                :  ((rhs[0] < lhs[0]) ? 1
                :  (lhs[1] < rhs[1] ? -1
                :  ((rhs[1] < lhs[1] ? 1 : 0))));
        });
	for(i=0;i<n-1;i++){
		//printf("%d %d\n",a[i][0],a[i][1] );
		if(a[i][0]==a[i+1][0]){
			if(a[i+1][1]-a[i][1]<min)
				min=a[i+1][1]-a[i][1];
		}
	}
	if(min==1000)
		printf("-1\n");
	else
	printf("%d\n",min);
	
	return 0;
}
	