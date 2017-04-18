#include <bits/stdc++.h>

using namespace std;

bool digits[10];

void printDigits(long long int number)
{
    while (number>0)
    {
        //printf("%d-", number % 10);
      digits[number%10]=true;
        number /= 10;
    }
}
bool check()
{
  for(int i=0;i<10;i++)
  {
    if(!digits[i])
      return false;
  }
  return true;
}

int main() {
  //freopen("in", "r", stdin);
  //freopen("out", "w", stdout);
  int tt;
  long long  int k;
  //scanf("%d", &tt);
  tt=1000000;
  for (int qq = 0; qq <= tt; qq++) {
    printf("Case #%d: ", qq);
    for(int j=0;j<10;j++)
    {
      digits[j]=false;
    }
    long long int n;
   // scanf("%lld", &n);
    n=qq;
    if(n==0)
    {
      printf("INSOMNIA\n");
      continue;
    }
    int ans = 0;
    long long int sum = 0;
    //long long int k=0;
    for(k=1;!check();k++)
    {
      printDigits(k*n);
    }
    
    printf("%lld\n", (k-1)*n);
  }
  return 0;
}
