#include<stdio.h>
#include<math.h>

int main()
{
    int t,i,j,k;
    long int w,b,x,y,z,cost=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld",&b,&w);
        scanf("%ld %ld %ld",&x ,&y,&z);
        if(y<=(x+z)&& x<=(y+z))
            cost=b*x +w*y;
        if(y<=(x+z)&& x>(y+z))
            cost=w*y + b*(y+z);
            if(y>(x+z)&& x<=(y+z))
                cost=b*x + w*(x+z);
            printf("%ld\n",cost);
            cost=0;



    }
return 0;

}
