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

string solution(vector <int> array) {
    sort(array.begin(),array.end());
    string s;
    int begin,end;
    string ans;
    
    
    string test="";
         stringstream ss;
        ss << array[0];
       ans+= ss.str();
   
   
    int count=0;
    for(int i=0;i<array.size()-1;i++){
       // cout << array[i] << " ";
        if(array[i]==array[i+1]-1){
            count++;
            stringstream ss;
             ss << array[i+1];
            test+=","+ ss.str();
         //   cout << array[i];
        } else {
            if(count>=3){
                cout << "-------" << array[i];
                ans+="-";
                 stringstream ss;
                 ss << array[i];
                  ans+= ss.str();
                ans+=",";
                count=0;
            } else {
                ans+=test;
                test="";
                count=0;
            }
        }
        if(count>0){
             stringstream ss;
            ss.clear();
                 ss << array[array.size()-1];
                  ans+= "-"+ss.str();
        }
        
    }
  //  cout << ans;
    return ans;
}

int main()
{
 string res;
    int array_size = 0;
    cin >> array_size;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    vector<int> array;
    for(int i = 0; i < array_size; i++) {
        int array_item;
        cin >> array_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        array.push_back(array_item);
    }

    res = solution(array);
    cout << res;

 
	
	return 0;
}