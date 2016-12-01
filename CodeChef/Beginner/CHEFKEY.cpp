#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int m,n,num;
		scanf("%d %d %d",&m,&n,&num);
		int square_root =  sqrt(num) + 1;
		int count=0;
		for (int i = 1; i < square_root; i++) { 
 			   if (num % i == 0&&i*i!=num)
 			   {
 			   	if(i<=m && num/i<=n)
 			   		count++;
 			   	if(num/i<=m && i<=n)
 			   		count++;
 			   }
 			   if(num%i==0 && i*i==num)
 			   {
 			   	if(i<=m && i<=n)
 			   		count++;
 			   }
      //  cout << i << num/i << endl;
	}
	printf("%d\n",count);
	}

	return 0;
}
	