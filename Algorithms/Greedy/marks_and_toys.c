#include<stdio.h>
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
    long int n,k,s=0,i;
    int j,q;
    scanf("%ld %ld",&n,&k);
     long int a[n];
     for(i=0;i<n;i++)
     {
         scanf("%ld",&a[i]);
     }
    quicksort(a,0,n-1);
    i=0;
    while(s<=k)
    {
        s+=a[i];
        i++;
    }
    printf("%ld",i-1);
    return 0;
}
