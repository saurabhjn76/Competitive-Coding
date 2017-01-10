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
  string s1,s2;
  cin >> s1 >> s2;
  //cout << s1 <<"\n" << s2;
  
  string sho,lon;
 if(s1.length()>s2.length())
 	{
 		lon=s1;
 		sho=s2;
 	}
 else
 	{
 		lon=s2;
 		sho=s1;
 	}
 	int j=0,flag=1,count=0;
 	for(int i=0;i<sho.length();i++){
 		for(;j<lon.length();j++){
 			if(sho[i]==lon[j]){
 				count++;
 				break;
 			}
 			else if(j==lon.length()-1){
 				flag=0;
 			}
 			
 		}
 	}
 	if(count==sho.length())
 		printf("YES\n");
 	else
 		printf("NO\n");
  }
	
	return 0;
}
	