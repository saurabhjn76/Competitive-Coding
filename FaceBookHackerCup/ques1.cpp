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
#define PI   3.1415925


typedef long long ll;

int main()
{
  int t;
  cin >> t;
  for(int i=1;i<t+1;i++){
  double x1=50,x2=50,x3,percent;
  double y1=50,y2=100,y3;
  sf(percent);sf(x3);sf(y3);
  double m1, m2;
  double mod1, mod2, innerp, angle;
  m1 = atan((y2-y1)/(x2-x1)) * 180 / PI;
  m2 = atan((y3-y1)/(x3-x1)) * 180 / PI;

  mod1   = sqrt(pow(y2-y1,2)+pow(x2-x1,2));
  mod2   = sqrt(pow(y3-y1,2)+pow(x3-x1,2));
  innerp = (x2-x1)*(x3-x1) + (y2-y1)*(y3-y1);
  angle  = acos(innerp / (mod1 * mod2)) * 180 / PI;
  /*cout << "m1 : " << m1 << endl;
    cout << "m2 : " << m2 << endl;
    cout << "angle : " << angle << endl;*/
   percent = percent*3.6;
   if(x3<50){
   	angle=360-angle;
   }
   if(angle<=percent && mod2<=50){
   	printf("Case #%d: black\n",i);
   }
   else
   	printf("Case #%d: white\n",i);
  }
	
	return 0;
}
	