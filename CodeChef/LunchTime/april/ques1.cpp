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

int main()
{
  int t;
  cin >> t;
  string s;
  while(t--){
   cin >> s;
   int coun=0;
   R(i,s.length()){
   	if(s[i]=='1'){
   		coun++;
   		int j=i;
   		for(;j<s.length();j++){
   			if(s[j]=='1'){
   				if(j==s.length()-1)
   				{
   					printf("YES\n");
   					i=s.length()+2;
   				}
   			}
   			else break;
   		}
   		for(int k=j;k<s.length();k++){
   			if(s[k]=='1')
   			{
   				printf("NO\n");
   				i=s.length()+2;
   				break;
   			}else{
   				if(k==s.length()-1){
   					printf("YES\n");
   					i=s.length()+2;
   					break;
   				}
   			}
   		}
   	}else if(i==s.length()-1 && coun==0){
   		printf("NO\n");
   	}
   }
  }
	
	return 0;
}
	