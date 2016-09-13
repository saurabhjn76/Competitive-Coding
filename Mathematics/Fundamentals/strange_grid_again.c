#include<stdio.h>

int main()
{

long long int r;
int c;
  scanf("%lld %d",&r,&c);
    if(r%2==1)
    {
        printf("%lld",(r-1)*5+2*(c-1));

    }
    else
    {
         printf("%lld",(r-2)*5+2*(c-1)+1);
    }
    return 0;
}
