#include <iostream>
#include <string.h>
using namespace std;

int t;//number of test cases
int price[100000][3]={0};
int cache[100000][3]={-1};
int n;
unsigned int costOfBuying(int fromShop, int item){
	//if buying from last shop, return total price
	if(fromShop == n-1){
		return price[fromShop][item];
	}
	else if(cache[fromShop][item] != -1){
		return cache[fromShop][item];
	}
	else{
		switch(item){
			case(0): cache[fromShop+1][1] = costOfBuying(fromShop+1,1);
			         cache[fromShop+1][2] = costOfBuying(fromShop+1,2);
			  return cache[fromShop][item] = price[fromShop][item] + min(cache[fromShop+1][1],cache[fromShop+1][2]);
			  break;
				   
			case(1): cache[fromShop+1][0] = costOfBuying(fromShop+1,0);
			         cache[fromShop+1][2] = costOfBuying(fromShop+1,2);
			  return cache[fromShop][item] = price[fromShop][item] + min(cache[fromShop+1][0],cache[fromShop+1][2]);
			  break;
				   
			case(2): cache[fromShop+1][0] = costOfBuying(fromShop+1,0);
			         cache[fromShop+1][1] = costOfBuying(fromShop+1,1);
			  return cache[fromShop][item] = price[fromShop][item] + min(cache[fromShop+1][0],cache[fromShop+1][1]);
			  break;
		}
	}
}

int main()
{
    cin>>t;
    for(int i=0;i<t;i++){
    	price[100000][3]={0};
        memset(cache,-1,sizeof(cache[0][0])*300000);
    	//for each test case
    	//read number of shops
    	n=0;
    	cin>>n;
    	//read prices for each shop
    	for(int j=0;j<n;j++){
    		for(int k=0;k<3;k++){
    			cin>>price[j][k];
    		}
    	}
    	int minMoney = min(costOfBuying(0,0),min(costOfBuying(0,1),costOfBuying(0,2)));
    	cout<<minMoney<<endl;
    }
    return 0;
}