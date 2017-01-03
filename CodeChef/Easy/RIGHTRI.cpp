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
int distance(int x,int y,int x1,int y1){
	return (int)pow((x-x1),2)+(int)pow((y-y1),2);
}
int main()
{
  int t,count=0;
  cin >> t;
  while(t--){
  int x1,y1,x2,y2,x3,y3;
  s(x1);s(y1);s(x2);s(y2);s(x3);s(y3);
  int a,b,c;
  a=distance(x1,y1,x2,y2);
  b=distance(x1,y1,x3,y3);
  c=distance(x3,y3,x2,y2);
  if(a==(b+c)||b==(a+c)||c==(b+a))
	count++;
}
  printf("%d\n",count);
	
	return 0;
}
	