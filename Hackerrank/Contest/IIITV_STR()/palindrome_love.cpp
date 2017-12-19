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
int oneDigit(int num)
{
    // comparison operation is faster than division operation.
    // So using following instead of "return num / 10 == 0;"
    return (num >= 0 && num < 10);
}
 
// A recursive function to find out whether num is palindrome
// or not. Initially, dupNum contains address of a copy of num.
bool isPalUtil(int num, int* dupNum)
{
    // Base case (needed for recursion termination): This statement
    // mainly compares the first digit with the last digit
    if (oneDigit(num))
        return (num == (*dupNum) % 10);
 
    // This is the key line in this method. Note that all recursive
    // calls have a separate copy of num, but they all share same copy
    // of *dupNum. We divide num while moving up the recursion tree
    if (!isPalUtil(num/10, dupNum))
        return false;
 
    // The following statements are executed when we move up the
    // recursion call tree
    *dupNum /= 10;
 
    // At this point, if num%10 contains i'th digit from beiginning,
    // then (*dupNum)%10 contains i'th digit from end
    return (num % 10 == (*dupNum) % 10);
}
 
// The main function that uses recursive function isPalUtil() to
// find out whether num is palindrome or not
int isPal(int num)
{
    // If num is negative, make it positive
    if (num < 0)
       num = -num;
 
    // Create a separate copy of num, so that modifications made
    // to address dupNum don't change the input number.
    int *dupNum = new int(num); // *dupNum = num
 
    return isPalUtil(num, dupNum);
}

int main()
{
  int t;
  cin >> t;
  int a[100000],b[100000];
    while(t--){
    int n,m,c;
     fill_n(a,100000,0);
  fill_n(b,100000,0);
  vector<int> v,v1;
  int max_a=0,max_b=0;

    s(n);
    R(i,n){
    	s(c);
    	max_a=max(c,max_a);
    	a[c]++;
    }
    s(m);
    R(i,m){
    	s(c);
    	//max_b=max(c,max_b);
    	b[c]++;
    }
    int sum=0;
    R(i,max_a+1){
    	if(a[i]>0 && b[i]>0){
    		v1.push_back(i);
    	}
    }
    int j=0,sum2=0;
    //printf("%d\n",sum );
    if(v1.size()==0){
    	printf("EMPTY\n");
    	continue;
    } else {
    	//printf("%d\n",v1[(v1.size()-1)/2]);
    	if(isPal(v1[(v1.size()-1)/2])){
    		printf("SORRY\n");
    	} else {
    		printf("%d\n",v1[(v1.size()-1)/2]);
    	}

    }


  }
	
	return 0;
}
