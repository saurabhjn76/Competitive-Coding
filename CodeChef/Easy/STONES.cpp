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

#define ALPHABETS_COUNT 42 
int commonChars(char *s1, char *s2)
{
    int c_count = 0, i; 
    int arr1[ALPHABETS_COUNT] = {0}, arr2[ALPHABETS_COUNT] = {0};


    /* Compute the number of occurances of each character */
    while (*s1) arr1[*s1-'a'>=0?*s1++-'a':*s1++-'A'+26] += 1;
    while (*s2) arr2[*s2-'a'>=0?*s2++-'a':*s2++-'A'+26] += 1;       

    /* Increment count based on match found */
    for(i=0; i<ALPHABETS_COUNT; i++) {
        if(arr1[i] == arr2[i]) c_count += arr1[i];
        else if(arr1[i]>arr2[i] && arr2[i] != 0) c_count += arr2[i];
        else if(arr2[i]>arr1[i] && arr1[i] != 0) c_count += arr1[i];
    }

    return c_count;
}
typedef long long ll;

int main()
{
  int t;
  cin >> t;
  while(t--){
 	char a[200],b[200];
 	ss(a);ss(b);
 	int count=0;
 	for(int i=0;i<strlen(a);i++){
 		for(int j=0;j<strlen(b);j++){
 			if(a[i]==b[j])
 				{
 					count++;
 					break;
 				}
 		}
 	}
 	printf("%d\n",count );
 	//printf("%d\n",commonChars(a,b) );	 
  }
	
	return 0;
}
	