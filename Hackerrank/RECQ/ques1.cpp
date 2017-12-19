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

vector<string> split(const string& s)
{
   vector<string> ret;
   typedef string::size_type string_size;
   string_size i = 0;

   // invariant: we have processed characters [original value of i, i) 
   while (i != s.size()) {
      // ignore leading blanks
      // invariant: characters in range [original i, current i) are all spaces
      while (i != s.size() && isspace(s[i]))
         ++i;

      // find end of next word
      string_size j = i;
      // invariant: none of the characters in range [original j, current j)is a space
      while (j != s.size() && !isspace(s[j]))
         j++;

      // if we found some nonwhitespace characters 
      if (i != j) {
         // copy from s starting at i and taking j - i chars
         ret.push_back(s.substr(i, j - i));
         i = j;
      }
   }
   return ret;
}


void getList(vector<string> v,vector<string>  queries ){
	map <string, vector<int> > dict;
	for(int i=0; i< v.size();i++){
		vector<string> words = split(v[i]);
		for(int j=0;j<words.size();j++){
			dict[words[j]].push_back(i);
		}
	}


	 vector<int> ans;                     // 0  0  0  0  0  0  0  0  0  0
 	vector<int>::iterator it;

	for(int i=0;i< queries.size();i++){
		vector<string> words = split(queries[i]);
		bool flag=false;
		ans=dict[words[0]];
		for(int j=0; j<words.size();j++){
			if(dict[words[j]].size()==0){
				printf("-1\n");
				flag=true;
			}
			set_intersection(ans.begin(), ans.end(), dict[words[j]].begin(), dict[words[j]].end(), ans.begin());
			
			//cout << words[j];

		}
		if(flag)
			continue;
		set<int> s;
		unsigned size = ans.size();
		for( unsigned i = 0; i < size; ++i ) s.insert( ans[i] );
			ans.assign( s.begin(), s.end() );
		for(int i=0;i<ans.size();i++){
			printf("%d ",ans[i] );
		}
		printf("\n");
	}

}

int main()
{
  int t;
  vector<string> v;
  vector<string> queries;
  v.push_back("it will go away");
  v.push_back("go do art");
  v.push_back("what to will east");
  queries.push_back("go east will");
  getList(v,queries);

	return 0;
}