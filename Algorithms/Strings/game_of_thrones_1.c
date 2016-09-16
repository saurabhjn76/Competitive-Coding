#include<stdio.h>
#include<string.h>
int main()
{

    int i,j,k,b[26]={0},flag=0;
    char a[100000],c=97;
    gets(a);
    k=strlen(a);

        for(i=0;i<26;i++)
 {
 	for(j=0;j<k;j++)
 		{
			if(c==a[j])
				{
					b[i]++;
                }
        }
             c++;
 }
/* c=97;
for(i=0;i<26;i++)
{  printf("%c=%d\n",c,b[i]);
  c++;
}*/

      if(k%2==0)
      {
          for(i=0;i<26;i++)
          {
              if((b[i]%2)!=0)
              {
                  printf("NO");
                  flag=6;
                  break;


              }
          }
          if(flag!=6)
          {
              printf("YES");
          }

      }
      flag=0;
   if(k%2!=0)
   {
       for(i=0;i<26;i++)
          {
              if((b[i]%2)!=0)
              {    flag++;




              }
          }
          if(flag==1)
          {
              printf("YES");

          }
          else
          {
              printf("NO");
          }
   }
   return 0;

}
