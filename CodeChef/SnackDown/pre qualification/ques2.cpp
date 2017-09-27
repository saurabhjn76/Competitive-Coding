#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf("%c",&n)
# define sl(n)                       scanf("%lld",&n)
# define sf(n)                       scanf("%lf",&n)
# define ss(n)                       scanf("%s",n)

#define R(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

# define INF                         (int)1e9
# define EPS                         1e-9
# define MOD 1000000007

bool isRectangle(int x1, int y1,
                 int x2, int y2,
                 int x3, int y3,
                 int x4, int y4)
{
  double cx,cy;
  double dd1,dd2,dd3,dd4;

  cx=(x1+x2+x3+x4)/4;
  cy=(y1+y2+y3+y4)/4;

  dd1=pow((cx-x1),2)+pow((cy-y1),2);
  dd2=pow((cx-x2),2)+pow((cy-y2),2);
  dd3=pow((cx-x3),2)+pow((cy-y3),2);
  dd4=pow((cx-x4),2)+pow((cy-y4),2);
  return dd1==dd2 && dd1==dd3 && dd1==dd4;
}

typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=4,maxi=1;
        //cin>>n;
        int points[n][2];
        for(int i=0;i<n;++i)
            cin>>points[i][0]>>points[i][1];
        if(isRectangle(points[0][0],points[0][1],points[1][0],points[1][1],points[2][0],points[2][1],	points[3][0],points[3][1]))
        {
        	printf("NO\n");
        	continue;
        }
        for(int i=0;i<n-1;++i)
        {
            double slopes[n-1-i];
            int l=0,cnt=2;
            for(int j=i+1;j<n;++j)
            {
                double slope = (double)(points[i][0]-points[j][0])/(double)(points[i][1]-points[j][1]);
                slopes[l]=slope;
                l++;
            }
            sort(slopes,slopes+n-i-1);
            for(int j=1;j<n-1-i;++j)
            {
                if(slopes[j]==slopes[j-1])
                    cnt++;
                else
                {
                    if(cnt>maxi)
                        maxi=cnt;
                    cnt=2;
                }
            }
            if(cnt>maxi)
                maxi=cnt;
            /*for(int j=0;j<n-1-i;++j)
                cout<<slopes[i]<<" ";
            cout<<endl;*/
        }
       // cout<<maxi<<endl;
        if(maxi==4){
        	printf("NO\n");
        	continue;
        }
        else{
        	printf("YES\n");
        }

    }
}
	