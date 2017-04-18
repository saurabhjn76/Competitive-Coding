#include <bits/stdc++.h>
using namespace std;
int array[32];
void divisor(long long int n)
{
  for(int i=2;i<n;i++)
    {
      if(n%i==0)
     { printf(" %d",i);
    break;
      }
  }

}

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
for(int j=31;j>=0;j--)
    {
        rem = array[j];
        dec = dec + rem * base;
        base = base * basee;
        //num = num / 10;
    }
    return dec;
}
void genrate()
{
   array[0]=1;
   array[31]=1;
   int k=0;
  for(int i = 0; i < pow(2,11); ++i) {
   // printf("%u%u%u%u%u%u%u%u%u%u%u%u%u%u\n",i/4096%2, i/3072%2,i/2048%2, i/1024%2, i/512%2, i/256%2,i/128%2, i/64%2, i/32%2, i/16%2, i/8%2, i/4%2, i/2%2, i%2);  
    //i/4096%2, i/3072%2,i/2048%2, i/1024%2, i/512%2, i/256%2,i/128%2, i/64%2, i/32%2, i/16%2, i/8%2, i/4%2, i/2%2, i%2
   array[30]=i/4096%2;
    array[29]=i/3072%2;
   array[28]=i/4096%2;
    array[27]=i/3072%2;
    array[26]=i/2048%2;
    array[25]=i/1024%2;
    array[24]=i/512%2;
    array[23]=i/256%2;
    array[22]=i/128%2;
    array[21]=i/64%2;
    array[20]=i/32%2;
    array[19]=i/16%2;
    array[18]=i/8%2;
    array[17]=i/4%2;
    array[16]=i/2%2;
    array[15]=i/1%2;
    array[14]=i/4096%2;
    array[13]=i/3072%2;
    array[12]=i/2048%2;
    array[11]=i/1024%2;
    array[10]=i/512%2;
    array[9]=i/256%2;
    array[8]=i/128%2;
    array[7]=i/64%2;
    array[6]=i/32%2;
    array[5]=i/16%2;
    array[4]=i/8%2;
    array[3]=i/4%2;
    array[2]=i/2%2;
    array[1]=i/1%2;
    long long int ans;
    for( k=2;k<=10;k++)
    {  ans=convert(k);
      if(IsPrime(ans))
      {
        //printf("%lld---%d\n",convert(k),k);
        break;
      }
    }
      if(k==11)
        {for(int l=0;l<16;l++)
          printf("%d",array[l] );
          for(int k=2;k<=10;k++)
          {
            divisor(convert(k));
          }
          printf("\n"); 
        }    
    
}
}
int main() {
  /*freopen("in", "r", stdin);
  freopen("out", "w", stdout);*/
  int tt,qq=1;
  printf("Case #%d:\n", qq);
  //sieve();
  //printf("%lf\n",pow(9,32) );
  genrate();
  /*scanf("%d", &tt);
  for (int qq = 1; qq <= tt; qq++) {
    printf("Case #%d: ", qq);
    int n,j;
    scanf("%d %d", &n, &j);
    int ans = 0;
    int sum = 0;
   
  }*/
    //printf("%lld\n",convert(9) );
  return 0;
}
