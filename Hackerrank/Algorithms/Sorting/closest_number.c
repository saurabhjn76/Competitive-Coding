#include<stdio.h>
#include<math.h>

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
    long int i,j,k=0,l,n,min=0;
    scanf("%ld",&n);
    long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    quicksort(a,0,n-1);
  min=a[1]-a[0];
    for(i=0;i<n-1;i++)
    {
        //for(j=i+1;j<n;j++)
        {
            if(a[i+1]-a[i]<=min)
            {
                min=a[i+1]-a[i];
               // b[i][j]=a[j]-a[i];

            }
         //   else
              //  b[i][j]=0;
        }
    }
    for(i=0;i<n-1;i++)
    {
       // for(j=i+1;j<n;j++)
        {
            if(a[i+1]-a[i]==min)
            {
                printf("%ld %ld ",a[i],a[i+1]);
            }

        }
    }
    return 0;
}
