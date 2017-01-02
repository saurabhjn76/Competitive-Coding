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
   int t,i,j1,s1,k,count;
   char s[1001],j[1001];
   scanf("%d",&t);
   while(t--)
   {         count=0;
             scanf("%s",j);
             scanf("%s",s);
             j1=strlen(j);
             s1=strlen(s);
             for(i=0;i<s1;i++)
             for(k=0;k<j1;k++)
                             
                             if(s[i]==j[k])
                             {count++;
                            
                              break;}
                              
                              
                            printf("%d\n",count);
                            
                            }
                       
                            return 0;
                            
}
 