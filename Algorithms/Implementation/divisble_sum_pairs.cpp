#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    int count=0;
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<i;j++)
    	{
    		if((a[i]+a[j])%k==0)
    			count++;
    	}
    }
    printf("%d\n",count);
	return 0;
}
	