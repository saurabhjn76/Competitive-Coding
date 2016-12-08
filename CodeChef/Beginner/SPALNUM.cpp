#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007
# define GETCHAR getchar_unlocked
typedef long long ll;

inline ll  readllInt() {
    ll  n = 0;
    char c;
    while (1){ 
      c=GETCHAR();
      if(c=='\n'||c==' ') break;
       n = n * 10 + c - '0';
    }
    return n;
}

inline int readInt() {
    int n = 0;
    char c;
    while (1){ 
      c=GETCHAR();
      if(c=='\n'||c==' ') break;
       n = n * 10 + c - '0';
    }
    return n;
}
bool isPalindrome(int i){
	int n = i;
 int rev = 0;
 int dig;
 while (n > 0)
 {
      dig = n % 10;
      rev = rev * 10 + dig;
      n = n / 10;
 }
 if(i==rev)
 	return true;
 else
 	return false;
}

int main()
{
  int t=readInt();
  int a[100003];
  ll sum=0;
  for(int i=0;i<100002;i++){
  	if(isPalindrome(i))
  	{
  		sum+=i;
  		
  		/*if(i<10)
  		printf("%d\n", a[i]);*/
  	}
  	a[i]=sum;
  }
  while(t--){
  	int l,r;
  	cin >> l >> r;
  	//printf("%d %d\n",l ,r );
  	printf("%d\n",a[r]-a[l-1]);


  }
	
	return 0;
}
	