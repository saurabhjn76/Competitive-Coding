#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i;
    float countp=0,countz=0,countn=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        if(a[i]>0)
        countp++;
        else if(a[i]==0)
        countz++;
        else
        countn++;
        }
    printf("%0.3f\n%0.3f\n%0.3f\n",countp/n,countn/n,countz/n);

    return 0;
}
