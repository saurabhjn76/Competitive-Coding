#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k,l,m,n,q;
    char a[500];
    scanf("%d",&n);
    scanf("%s",a);
    scanf("%d",&k);
    for(i=0;i<n;i++)
        {
        if((a[i]>=97 && a[i]<=122))
       { a[i]=a[i]-97;
       k=k%26;
        a[i]+=k;
        a[i]=a[i]%26;
        a[i]+=97;
        printf("%c",a[i]);
       }
        else if(a[i]>=65 && a[i]<=90)
        {
             a[i]=a[i]-65;
             k=k%26;
        a[i]+=k;
        a[i]=a[i]%26;
        a[i]+=65;
        printf("%c",a[i]);
        }
        else
            printf("%c",a[i]);


    }

    return 0;
}
