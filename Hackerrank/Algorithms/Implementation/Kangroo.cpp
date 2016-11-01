#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	 int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if(v2==v1)
    {
    	if(x2==x1)
    		printf("YES\n");
    	else
    		printf("NO\n");
    }
    else if((x1-x2)/(v2-v1)>=0 && (x1-x2)%(v2-v1)==0)
    	printf("YES\n");
    else
    	printf("NO\n");
	return 0;
}
	