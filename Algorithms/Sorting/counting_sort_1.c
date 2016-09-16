#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,a[1000000],b[1000000],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=0;j<100;j++)
        {
    for(i=0;i<n;i++)
        
        {
           if(a[i]==j)
               b[j]++;
    }
        printf("%d ",b[j]);
    }
    return 0;
}
