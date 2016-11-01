#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long long int i,j,k,n,sum=0;
    int kl;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
{
        scanf("%d",&kl);
        sum+=kl;
        
    }
    printf("%lld",sum);
    return 0;
}
