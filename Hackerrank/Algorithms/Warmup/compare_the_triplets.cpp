#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int a,b,c,d,e,f;
	int alice=0,bob=0;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(a>d)
		alice++;
	else if(d>a)
		bob++;
	if(b>e)
		alice++;
	else if(e>b)
		bob++;
	if(c>f)
		alice++;
	else if(f>c)
		bob++;
	
printf("%d %d\n",alice,bob );
	return 0;
}
