#include <bits/stdc++.h>
using namespace std;
int partion(vector<int> &arr,int lower,int upper)
{
	//int j=lower -1;
	//int pivot=arr[lower];
	int pivot_pos=lower;
	int i=lower+1;
	int temp;

	while(i<=upper)
	{
		if(arr[i]<arr[pivot_pos])
		{
			temp=arr[i];
			for(int k=i-1;k>=pivot_pos;k--)
				arr[k+1]=arr[k];
			arr[pivot_pos]=temp;
			pivot_pos++;
		}
		i++;

	}
	/*temp=arr[pivot_pos];
	arr[pivot_pos]=arr[j+1];
	arr[j+1]=temp;*/
	return pivot_pos;
}

void quickSort(vector <int> &arr,int lower,int upper) {
   if(upper<=lower)
   	return ;
   else
   {
   	int r_pivot=partion(arr,lower,upper);
   		//printf("pivot-->%d\n",arr[r_pivot] );
   		quickSort(arr,lower,r_pivot-1);
   		quickSort(arr,r_pivot+1,upper);
  
   
    for(int i = lower; i <=upper; ++i) 
        cout<< arr[i] <<" ";
        printf("\n");
    

   }
   return ;
}

int main()
{
    int n,lower=0,upper;
    cin >> n;
    upper=n-1;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }
    quickSort(arr,lower,upper); 
    return 0;
}
