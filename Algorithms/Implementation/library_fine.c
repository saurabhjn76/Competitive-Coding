#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int d1,m1,y1,d2,m2,y2;
    scanf("%d %d %d",&d2,&m2,&y2);
    scanf("%d %d %d",&d1,&m1,&y1);
    if(y1!=y2)
       {if(y1<y2) printf("10000\n");
        else
            printf("0\n");
       }
    else if(m1!=m2)
        {
        if(m1>m2)
            printf("0");
        else
            printf("%d",(m2-m1)*500);
        
    }
    else if(d1!=d2)
        {
        if(d1>d2)
            printf("0");
        else
            printf("%d",(d2-d1)*15);
    }
    else
        printf("0");
    
    
    return 0;
}
