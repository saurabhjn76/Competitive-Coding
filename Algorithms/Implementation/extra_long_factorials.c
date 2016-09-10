// C code for factorial of large number -Team 02
#include<stdio.h>
#include<malloc.h>

typedef struct node{
              int data;
              struct node *prev;        // structure for dynamic allocation for printing the factorial
              struct node *next;
             }node;
 node *Head,*t,*q,*temp;

int main()
{
int i,j,n,carry=0,test;
test=1;
while(test--)

{
    t=(node*)malloc(sizeof(node));

//printf("Calculate the factorial of :");
scanf("%d",&n);
if(n>0)

{
t->data=1;    // initializing the initial data value
t->next=NULL;
t->prev=NULL;
Head=t;   // beginning of the list

for(j=1;j<=n;j++)  // loop used for multiplication of each number with the array elements
{
    carry=0;

    for(q=Head;q!=NULL;q=q->next)
    {
        carry=((q->data)*j)+carry;  // carry is the digit which is added to next value calculated.
        q->data=carry%10;  // storing the unit's position of the carry int the list
        carry=carry/10; // extracting the  carry digit
        temp=q; // since on updating q will become NULL so storing previous address of q in temp variable.

    }
q=temp;
 // loop to extract digits from previous  calculated carry digits
    while(carry>0)
  {
     t=(node*)malloc(sizeof(node));
     t->data=carry%10;
     q->next=t;
     t->next=NULL;
     t->prev=q;
     carry=carry/10;
     q=t;
  }
}


// loop to print the output list
//printf("\nThe factorial of %d is  as follows: \n",n);
//printf("\n--------------------------------------------------------------------------------");
 for(;(q!=NULL);q=q->prev)
    {

        printf("%d",q->data);

    }
   // printf("\n--------------------------------------------------------------------------------\n");
}
else
{
    if(n==0)
    printf("\n The factorial of %d is : 1\n",n);
     if(n<0)
     printf("The factorial only exist for number >=0 !!!! \n");
}
}
return 0;
}
