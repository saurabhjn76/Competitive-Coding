#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,n;
    scanf("%d",&n);
   for(i=0;i<n;i++)
       {
       scanf("%d",&j);
       printf("%d\n",j*(j-1)/2);
   }
    return 0;
}