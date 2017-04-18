#include <bits/stdc++.h>
using namespace std;
int array[16];
bool IsPrime( long long int number )
{
 if ( ( (!(number & 1)) && number != 2 ) || (number < 2) || (number % 3 == 0 && number != 3) )
  return (false);

 for( int k = 1; 36*k*k-12*k < number;++k){
  if ( (number % (6*k+1) == 0) || (number % (6*k-1) == 0) )
   return (false);
  return true;
 }
}
long long int  convert(int basee)
{ 
  long long int dec=0,rem,base=1;
for(int j=15;j>=0;j--)
    {
        rem = array[j];
        dec = dec + rem * base;
        base = base * basee;
        //num = num / 10;
    }
    return dec;
}
int main()
{
	for(int i=0;i<16;i++)
	{
		array[i]=0;
	}
	array[15]=1;
	array[0]=1;
	int l;
	for(int k=2;k<=10;k++)
	{
		printf("%lld\n",convert(k));
		//scanf("%d",&l);
		if(!IsPrime(convert(k)))
			printf("true\n");
	}
	return 0;
}