#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *  ar) {
    int t=ar[ar_size-1];
    int i,j,k;
    for(i=0;i<ar_size;i++)
        {
        if(t<ar[i])
            {break;}
    }
    for(j=ar_size-2;j>i-1;j--)
        {
        ar[j+1]=ar[j];
          for(k=0;k<ar_size;k++)
        {
              printf("%d ",ar[k]);
          }printf("\n");
    }
    ar[i]=t;
     for(k=0;k<ar_size;k++)
        {
              printf("%d ",ar[k]);
          }printf("\n");
    


}
int main(void) {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

insertionSort(_ar_size, _ar);
   
   return 0;
}
