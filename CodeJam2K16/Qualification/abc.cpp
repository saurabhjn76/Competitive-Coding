#include <bits/stdc++.h>
using namespace std;

int func2(int y, int x)
{
	int z = 1;
	z = z<<x;
	return(y & z);
}	

int power(int a, int b)
{
	int x = a, y = 1;
	
	for(int i=0; i<32; i++)
	{
		
		if(func2(b, i)>0)
		{
			y=y*x;
			//printf("%d %d\n",i,y );
		}
		
		x=x*x;
	}
	return (y);
}

int  main(int argc, char** argsv){
	cout<<power(0,1);
}
