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

int main()
{
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    int x,y;
    int a_c=0,b_c=0;
    s(x);s(y);
    R(i,s.length()){
    	if(s[i]=='a'){
    		a_c++;
    	} else {
    		b_c++;
    	}
    }
    char c='c';
      string out="";
    if((double)b_c/y>(double)a_c/x){
    	c='b';
    	//printf("sadsad\n");
    	while(b_c-y>=0 && a_c>=0){
    		if(b_c-y<0 || a_c-1<0)
    			break;
    	R(i,y){
    		out+="b";
    	}
    	out+="a";
    	b_c-=y;
    	a_c--;
    }
    if(a_c>0){   // error ignoring equality case  aabbaabb
    	R(i,b_c){
    		out+="b";
    	}
    	if(b_c==0){
    		R(i,min(x-1,a_c)){
    			out+="a";
    		}
    		a_c-=min(x-1,a_c);
    	} else {
    	R(i,min(x,a_c)){
    		out+="a";
    	}
    	a_c-=min(a_c,x);
    	b_c=0;
    }
    	if(a_c>0){
    		R(j,out.length()){
    			if(out[j]=='a' && a_c >0){
    				int k;
    				for( k=j+1;k<j+x && a_c>0;k++){
    					out.insert(k,"a");
    					a_c--;
    				}
    				j=k;
    				if(a_c==0){
    					break;
    				}
    			}
    		}
    	}
    } else { // a finshed

    	while(b_c-y>0){
    		b_c-=y;
    		R(i,y){
    			out+="b";
    		}
    		out+="*";
    	}
    	R(i,b_c){
    		out+="b";
    	}
    }

    } else {
    	c='a';
    		//printf("happy happy\n");
       	while(b_c-1>=0 && a_c-x>=0){
    		if(b_c-1<0 || a_c-x<0)
    			break;
    	R(i,x){
    		out+="a";
    	}
    	out+="b";
    	a_c-=x;
    	b_c--;
    }
    	if(b_c>0){

    	R(i,a_c){
    		out+="a";
    	}
    	if(a_c==0){
    		R(i,min(y-1,b_c)){
    		out+="b";
    	}
    	b_c-=min(y-1,b_c);
    	a_c=0;
    } else {
    		R(i,min(y,b_c)){
    		out+="b";
    	}
    	b_c-=min(y,b_c);
    }
    	if(b_c>0){
    		R(j,out.length()){
    			if(out[j]=='b' && b_c >0){
    				int k;
    				for( k=j+1;k<j+y && b_c>0;k++){
    					out.insert(k,"b");
    					b_c--;
    				}
    				j=k;
    				if(b_c==0){
    					break;
    				}
    			}
    		}
    	}
    } else { // b finshed
    	while(a_c-x>0){
    		a_c-=x;
    		R(i,x){
    			out+="a";
    		}
    		out+="*";
    	}
    	R(i,a_c){
    		out+="a";
    	}
    }
    
}
 cout << out << "\n";
  
   
  }
	
	return 0;
}