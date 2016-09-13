#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,k,a[100],x;
    long int pro=1;
    scanf("%d",&j);
    for(i=0;i<j;i++)
        {
        scanf("%d",&k);
        for(x=0;x<k-1;x++)
            {
            scanf("%d",&a[x]);
            pro=(pro*a[x])%1234567;
        }
        printf("%ld\n",pro);
        pro=1;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
