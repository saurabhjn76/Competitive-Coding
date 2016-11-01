#include<stdio.h>
#include<string.h>
void timeinwords(int);
int main()
{
    int i,j,k,h,m;
    scanf("%d",&h);
    scanf("%d",&m);
  //  char h[10],m[20];
    if(m==0)
    {
         timeinwords(h);
         printf(" ");
          timeinwords(m);

    }
    else
    {
        if(m==1)
        {
          timeinwords(m);
             printf(" ");
          printf("minute past ");
          timeinwords(h);
        }
        else
            if(m<=29 && m>1 && m!=15)
               {
          timeinwords(m);
             printf(" ");
          printf("minutes past ");
          timeinwords(h);
        }
        else
            if(m==30 || m==15)
        {
             timeinwords(m);
                printf(" ");
          printf("past ");
          timeinwords(h);
        }
        else if(m>30 && m<60&& m!=45)
        {
             timeinwords(60-m);
                printf(" ");
          printf("minutes to ");
          timeinwords(h+1);
        }


    else if(m==45)
        {
             timeinwords(60-m);
                printf(" ");
          printf("to ");
          timeinwords(h+1);
        }
    }
return 0;


}
void timeinwords(int i)
{
    switch(i)
    {
        case 0: printf("o' clock\n");
                break;
        case 1: printf("one");
                 break;
        case 2: printf("two");
                 break;
        case 3: printf("three");
                break;
        case 4: printf("four");
                 break;
        case 5: printf("five");
                 break;
        case 6: printf("six");
                 break;
        case 7: printf("seven");
                 break;
        case 8: printf("eight");
                 break;
        case 9: printf("nine");
                 break;
        case 10: printf("ten");
                 break;
        case 11: printf("eleven");
                 break;
        case 12: printf("twelve");
                 break;
        case 13: printf("thirteen");
                break;
        case 14: printf("fourteen");
                 break;
        case 15: printf("quarter");
                 break;
        case 16: printf("sixteen");
                 break;
        case 17: printf("seventeen");
                 break;
        case 18: printf("eighteen");
                 break;
        case 19: printf("nineteen");
                 break;
        case 20: printf("twenty");
                 break;
        case 21: printf("twenty one");
                 break;
        case 22: printf("twenty two");
                 break;
        case 23: printf("twenty three");
                break;
        case 24: printf("twenty four");
                 break;
        case 25: printf("twenty five");
                 break;
        case 26: printf("twenty six");
                 break;
        case 27: printf("twenty seven");
                 break;
        case 28: printf("twenty eight");
                 break;
        case 29: printf("twenty nine");
                 break;
        case 30: printf("half");
                 break;
        case 31: printf("thirty one");
                 break;
        case 32: printf("thirty two");
                 break;
        case 33: printf("thirty three");
                break;
        case 34: printf("thirty four");
                 break;
        case 35: printf("thirty five");
                 break;
        case 36: printf("thirty six");
                 break;
        case 37: printf("thirty seven");
                 break;
        case 38: printf("thirty eight");
                 break;
        case 39: printf("thirty nine");
                 break;
        case 40: printf("forty");
                 break;
         case 41: printf("forty one");
                 break;
        case 42: printf("forty two");
                 break;
        case 43: printf("forty three");
                break;
        case 44: printf("forty four");
                 break;
        case 45: printf("quarter");
                 break;
        case 46: printf("forty six");
                 break;
        case 47: printf("forty seven");
                 break;
        case 48: printf("forty eight");
                 break;
        case 49: printf("forty nine");
                 break;
        case 50: printf("fifty");
                 break;
         case 51: printf("fifty one");
                 break;
        case 52: printf("fifty two");
                 break;
        case 53: printf("fifty three");
                break;
        case 54: printf("fifty four");
                 break;
        case 55: printf("fifty five");
                 break;
        case 56: printf("fifty six");
                 break;
        case 57: printf("fifty seven");
                 break;
        case 58: printf("fifty eight");
                 break;
        case 59: printf("fifty nine");
                 break;
        case 60: printf("full");
                 break;

    }
}
