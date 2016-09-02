#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,i,j,k,sum1=0,sum2=0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
        {for(j=0;j<n;j++)
             {
            scanf("%d",&a[i][j]);
            if(i==j)
                sum1+=a[i][j];
            if(i+j==n-1)
                {
                sum2+=a[i][j];
            }
        }}
    printf("%d",abs(sum1-sum2));
    return 0;
}