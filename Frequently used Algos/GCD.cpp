 ll gcd( ll a, ll b)
{
     ll rem,max,min;

 //printf("Enter the TWo no. for HCF calculation \n");
 // scanf("%d%d",&a,&b);
 if(a>=b){   
  max=a;
  min=b;
  }
 else{
  max=b;
  min=a;
  }
 while(min!=0){
    rem=max%min;
    max=min;
    min=rem;
    }
 // printf("The hcf of given number %d & %d is :%d\n",a,b,max);
 return max;
 }