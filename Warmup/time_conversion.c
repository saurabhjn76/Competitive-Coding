#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int h1,h2,m1,m2,s1,s2;
    char a,b,c;
    scanf("%1d%1d%c%1d%1d%c%1d%1d%c%c",&h1,&h2,&a,&m1,&m2,&a,&s1,&s2,&b,&c);
    if(b=='A')
       { if(h1==1 &&h2==2)
              printf("00:%d%d:%d%d",m1,m2,s1,s2);
        else
        printf("%d%d:%d%d:%d%d",h1,h2,m1,m2,s1,s2);
       }
    else
        { if(h1==1 &&h2==2)
              printf("12:%d%d:%d%d",m1,m2,s1,s2);
        else 
        
          printf("%d%d:%d%d:%d%d",h1+1,h2+2,m1,m2,s1,s2);
        }
    return 0;
}