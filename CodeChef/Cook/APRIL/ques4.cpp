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


typedef long long ll;

typedef struct {
	int x;
	int y;
	double dist;
	string s;
}point;
bool ComparePop (const point& l,  const point& r)
{
  return l.dist < r.dist;
}
bool checkIng(string s,int kk){
	R(i,kk){
		if(s[i]=='0')
			return false;
	}
	return true;
}
int main()
{
  int t;
  cin >> t;
  while(t--){
   int n,k;
   string temp;
   s(n);s(k);
   point shop[n];
   R(i,n){
   	s(shop[i].x);s(shop[i].y);
   	shop[i].dist=sqrt(shop[i].x*shop[i].x +shop[i].y*shop[i].y);
   }
   R(i,n){
   	cin >> shop[i].s;
   	if(i==0){
   		temp=shop[i].s;
   	}
   	else{
   		R(j,k){
   			if(temp[j]=='0' && shop[i].s[j]=='1'){
   				temp[j]='1';
   			}
   		}
   	}
   }
   bool flag=true;
   // input com[...]
   printf("dsdsa\n");
   R(j,k){
   	if(temp[j]=='0')
   	{
   		printf("-1\n");
   		flag=false;
   		break;
   	}
   }
   if(flag){
   	sort(shop,shop+n,&ComparePop);
   	string ans_string="";
   	double ans_dist=0;
   	ans_string=shop[0].s;
   	ans_dist+=shop[0].dist;
   	int last_visit=0;
   	int i;

   	for(i=1;i<n;i++){
   		if(checkIng(ans_string,k)){
   			printf("%lf\n",ans_dist + shop[i-1].dist);
   			break;
   		}else{
   				bool goflag=false;
   			R(j,k){
   			if(ans_string[j]=='0' && shop[i].s[j]=='1'){
   				ans_string[j]='1';
   				goflag=true;
   			}
   		}
   			//cout << ans_string << endl;
   		if(goflag){
   			last_visit=i;
   			ans_dist+=sqrt((pow(shop[i].x-shop[i-1].x,2)) + (pow(shop[i].y-shop[i-1].y,2)));
   		}
  		}
   	}
   	if(i==n && checkIng(ans_string,k)){
   			printf("%lf\n",ans_dist + shop[last_visit
   				].dist);
   		}
   }
  }
	
	return 0;
}
	