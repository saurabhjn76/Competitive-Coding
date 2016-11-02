#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	string s;
	int i,j,k,l;
	cin >> s;
	int count=1;
	for(i=0;i<s.size();i++){
		if(s[i]>=65 && s[i]<=65+25)
			count++;
	}
	printf("%d\n",count);
	return 0;
}
	