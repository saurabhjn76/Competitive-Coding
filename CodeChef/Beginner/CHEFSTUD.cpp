#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		string s ;
		cin >>s;
		int l= s.length();
		int count=0;
		for(int i=0;i<l-1;i++){
			if(s[i]=='<' && s[i+1]=='>')
				count++;
		}
		printf("%d\n",count );
	}
	return 0;
}
	