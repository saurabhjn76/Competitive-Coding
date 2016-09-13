#include<stdio.h>
#include<math.h>

int main()
{
     long int t, l,b,i,j,k=0,min;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld",&l,&b);
        if(l>b)
            min=b;
        else if(l==b)
               {

                printf("1\n");
            continue;
               }


        else
            min=l;
        do
        {   if((l*b)%(min*min)==0 && l%min==0 && b%min==0){
            k=(l*b)/(min*min);

            break;
        }
            else
                min--;
        }while(k==0);
        printf("%ld\n",k);
        k=0;
    }

}

