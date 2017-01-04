#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf("%c",&n)
# define sl(n)                       scanf("%lld",&n)
# define sf(n)                       scanf("%lf",&n)
# define ss(n)                       scanf("%s",n)

# define INF                         (int)1e9
# define EPS                         1e-9
# define MOD 1000000007


typedef long long ll;

int main()
{
  int t;
  cin >> t;
  while(t--){
  int n;
  s(n);
  int a[n];
  for(int i=0;i<n;i++)
  scanf("%1d",&a[i]);
if(n==1)
	if(a[0]==0)
		printf("1\n");
	else
		printf("0\n");
else
{
	int count=0;
	if(a[0]==0 && a[1]==0)
		count++;
	if(a[n-1]==0 && a[n-2]==0)
		count++;
	for(int i=1;i<n-1;i++){
		if(a[i-1]==0 && a[i]==0 && a[i+1]==0)
			count++;
	}
	printf("%d\n",count );
}

  }
	
	return 0;
}
	