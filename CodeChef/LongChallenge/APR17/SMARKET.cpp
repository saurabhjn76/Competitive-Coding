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
typedef struct {
	int index;
	int l;
	int r;
	int k;
	int ans;
}node;
int BLOCK_size;
bool ComparePop (const node& x,  const node& y)
{
 		if(x.l/BLOCK_size!=y.l/BLOCK_size){
 			return  x.l/BLOCK_size < y.l/BLOCK_size;
 		} 
 		return 	x.r < y.r;
 }
 bool Compareindex (const node& x,  const node& y)
{
 		return x.index< y.index;
 }


int main()
{
  int t;
  cin >> t;
  while(t--){
  int n,q;
  s(n);s(q);
  BLOCK_size=(int)sqrt(n);
  int a[n],right[n],left[n];
  R(i,n){
  	s(a[i]);
  }
  right[0]=1;
  FOR(i,1,n){
  	if(a[i]==a[i-1])
  		right[i]=1+right[i-1];
  		else
  			right[i]=1;
  }
  left[n-1]=1;
  FORD(i,n-2,0){
  	if(a[i]==a[i+1])
  		left[i]=1+left[i+1];
  		else
  			left[i]=1;
  }
  /*R(i,n){
  	printf("%d ",right[i]);
  }
  printf("\n");
  R(i,n){
  	printf("%d ",left[i]);
  }
  printf("\n");
 // printf("\n");*/
  node ab[q];
  R(i,q){
  	ab[i].index=i;
 	s(ab[i].l);s(ab[i].r);s(ab[i].k);
 	ab[i].l--;ab[i].r--;
 	ab[i].ans=0;
  	}
  	sort(ab,ab+q,&ComparePop);
  	int r=-1,l=0;
  	vector<int> vv;
  	vector<int>::iterator it;
  	vector<int>::iterator del_it;
  	vv.push_back(0);
  	it=vv.begin();
  	del_it=vv.begin();
  	int del=1;
  	int ans[100001];
  	fill_n(ans,100001,0);
  	R(i,q){
  		if(ab[i].r>r){
  			for(r=r+1;r<=ab[i].r;r++){
  				//printf("%d\n",*it );
  				if(right[r]>*it){
  					it=vv.insert(it+1,*it+1);
  					//printf("%d-->%d\n",r,*it);
  					ans[*it]++;
  					//qu.push_back(ck.top()+1);
  				}
  				else
  					{
  						//ck.push(1);
  						it=vv.insert(it+1,1);
  						//printf("newI%d-->%d\n",r,*it);
  						ans[1]++;
  						//qu.push_front(1);
  					}
  			}
  			r--;
  			//printf("%d %d\n",ans[1],ans[2] );
  		}
  		if(ab[i].r<r){
  			for(;r>ab[i].r;r--){
  				ans[*it]--;
  				//printf("%d---<<<%d\n",r,*it );
  				vv.erase(it);
  				it--;
  				//ans[right[r]]--;
  			}
  			
  		}
  		if(ab[i].l<l){
  			for(;l>=ab[i].l;l--){
  				if(left[l]>*(vv.begin()+del)){
  					vv.insert((vv.begin()+del)+1,*(vv.begin()+del)+1);
  					ans[*(vv.begin()+del+1)]++;
  					del++;
  					//qu.push_back(ck.top()+1);
  				}
  				else
  					{
  						//ck.push(1);
  						vv.insert((vv.begin()+del)+1,1);
  						ans[1]++;
  						del++;
  						//qu.push_front(1);
  					}
  			}
  			l++;
  		}
  		if(ab[i].l>l){
  			while(1){
  				if(++del<vv.size() && vv[del-1]<vv[del]){
  					//printf("%d..\n",del );
  				}
  				else{
  					del--;
  					break;
  				}
  			}
  			//printf("%d........\n",del );

  			for(;l<ab[i].l;l++){
  				ans[vv[del]]--;
  				//printf("%d---<<<%d\n",l,vv[del] );
  				vv.erase(vv.begin()+del);
  				it--;
  				del--;
  			}
  			
  		}
  		ab[i].ans=ans[ab[i].k];
  		//printf("%d %d %d %d %d\n",ans[1],ans[2],ans[3],ans[4],ans[5] );
  	}
  	// sort and print the answer....
  	sort(ab,ab+q,&Compareindex);
  	R(i,q){
  		printf("%d\n",ab[i].ans);
  	}
 
  }
	
	return 0;
}
	