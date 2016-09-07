#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<malloc.h>



int main()
{
int i,j,k,*l;
char a[100000],*b,c=97,d=65;
//printf("\n Enter the string\n");
scanf("%[^\n]",a);
l=(int*)calloc(27,sizeof(int));
          // a=(char*)calloc(k,sizeof(char));

           /* for(i=0;c[i]!=EOF;i++)
               {
                    c[i]=getchar();
                     count++;
               }*/
k=strlen(a);
for(i=0;i<26;i++)
 {
 	for(j=0;j<k;j++)
 		{
			if(c==a[j] || d==a[j])
				{
					l[i]++;
                                }
               }
c++;
d++;
 }
	for(j=0;j<k;j++)
 		{
			if(' '==a[j])
				{
					l[26]++;
                                }
               }

for(i=0;i<=26;i++)
{
    if(l[i]<1)
    {
        printf("not pangram");
        break;
    }
}
if(i==27)
{
    printf("pangram");
}
return 0;
}
