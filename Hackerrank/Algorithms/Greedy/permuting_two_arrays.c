    #include<stdio.h>
#include<malloc.h>
int partition( long int x[],int low,int high)
{
    int left=low,right=high,temp,pivot=low;
    int piv=x[low],i;
    while(left<right)
    {
        while(x[left]<=piv)
        {
            left++;
        }
        while(x[right]>piv)
        {
            right--;

        }
        if(left<right)
        {
            temp=x[left];
            x[left]=x[right];
            x[right]=temp;
        }
    }
        x[low]=x[right];
        x[right]=piv;

        return right;


}
void quicksort( long int x[],int low ,int high)
{
    int pivot,i;
    if(high>low)
    {
        pivot=partition(x,low,high);
        quicksort(x,low,pivot-1);
        quicksort(x,pivot+1,high);
    }

}

int main()
{

    int n,i,j,t,y;
   long int k,temp,*a,*b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %ld",&n,&k);
     //   a=( long int*)calloc(n,sizeof(long int));
//b=(long int*)calloc(n,sizeof(long int));
long int a[n],b[n];
        for(j=0;j<n;j++)
        {
            scanf("%ld",&a[j]);

        }
         for(j=0;j<n;j++)
        {
            scanf("%ld",&b[j]);

        }

       quicksort(a,0,n-1);
       quicksort(b,0,n-1);
        //  for(j=0;j<n;j++)

        //    printf("%d %d \n",a[j],b[n-j-1]);

    for(j=0;j<n;j++)
    {
        if(a[j]+b[n-j-1]<k)
           {
              printf("NO\n");
              j=0;
                break;
           }

    }
     if(j==n)
        {
            printf("YES\n");
            j=0;
        }
    }
return 0;
}
