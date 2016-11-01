#include<stdio.h>
int partition( long int x[],long int low,long int high)
{
    long int left=low,right=high,temp,pivot=low;
   long  int piv=x[low],i;
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
void quicksort( long int x[],long int low ,long int high)
{
  long   int pivot,i;
    if(high>low)
    {
        pivot=partition(x,low,high);
        quicksort(x,low,pivot-1);
        quicksort(x,pivot+1,high);
    }

}
int main()
{
    long int k,n,i,j,s=0;
    scanf("%ld",&n);
    long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    quicksort(a,0,n-1);
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=-1)
     {

     for(j=i+1;j<n;j++)
        {
            if(a[j]-a[i]<=4)
            {
                a[j]=-1;
            }
        }
        s++;
     }
    }
    if(a[i]!=-1)
        s++;
    printf("%ld",s);


return 0;
}
