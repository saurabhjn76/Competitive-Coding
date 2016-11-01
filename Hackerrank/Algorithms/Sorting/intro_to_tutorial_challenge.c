#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int v,a[1000],n,i,j,k;
    scanf("%d",&v);
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        {
        if(a[i]==v)
            printf("%d\n",i);
    }
    
    return 0;
}
