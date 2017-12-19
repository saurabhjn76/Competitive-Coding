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
  int n1,n2;
  s(n1); // no of entries in Almirah 1
  int a1[n1];
  R(i,n1){
  	s(a1[i]);
  }
  s(n2);
  int a2[n2];
  R(i,n2){
  	s(a2[i]);
  }
  // merging two array with complexity O(n)
  int pointer1=0,pointer2=0;
  while(pointer2+pointer1 <= (n1+n2)/2+1){
  	if(a1[pointer1]>a2[pointer2]){
  		pointer1++;
  	
  	} else {
  		pointer2++;
  		
  	}
  	 if(pointer1==n1 || pointer2==n2){
  	 	break;
  	 }
  }
  //assuming in case of 2 middle it will print the second middle, not doing average stufff as it was not mentioned in the question.
  if(pointer2+pointer1 >=(n1+n2)/2+1){
  	printf("%d\n",max(a1[pointer1-1],a2[pointer2-1]) );  // got the middle point
  } else {
  	if(pointer1==n1){
  		while(pointer2+pointer1<=(n1+n2)/2){
  			pointer2++;									// array1 gets over
  		}
  		printf("%d\n",a2[pointer2-1] );
  	} else if(pointer2==n2){
  		while(pointer2+pointer1<=(n1+n2)/2){	
  			pointer1++;										// array two gets over
  		}
  		printf("%d\n",a1[pointer1-1] );
  	}
  }

 
	
	return 0;
}