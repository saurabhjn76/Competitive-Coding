	#include "bits/stdc++.h"
	using namespace std;

	# define MOD 1000000007
 // A stack approach would have been better, got to know string functions and static_cast for converting usigned int to compare.


	int main()
	{
		string str; 
		cin >> str;
		int i=0;

		while(i < static_cast< int > (str.size()-1)) {
			if(i>-1 && str[i] == str[i+1]) {
				str.erase(i,2);
				i--;
			} else
				i++;
		}
		    
		if(str.empty())
			cout << "Empty String" << endl;
		else
			cout << str << endl;

		return 0;
	}
		