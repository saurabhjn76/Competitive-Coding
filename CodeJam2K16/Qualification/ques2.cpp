#include <bits/stdc++.h>

using namespace std;

char s[300],b[300];
int l;
void flip(int n)
{
  strcpy(b,s);
  for(int i=0;i<n;i++)
  {
    if(b[i]=='+')
      s[n-i-1]='-';
    else
      s[n-i-1]='+';

  }
}
int  checkminus()
{
  for(int i=l-1;i>=0;i--)
  {
    if(s[i]=='-')
      return i;  //last index of -
  }
  return -123;  // all are +
}
int  checkplus()
{
  int count=0;
  if(s[0]=='+')
  {
    for(int i=0;i<l;i++)
    {
     if(s[i]=='-')
      return i;  //first index of -
    }
    return l;
  }
  else
  {
    /*for(int i=0;i<l;i++)
    {
     if(s[i]=='+')
      return i;  //first index of +
    }
    return l;*/
    return -40;
  }
}
int main() {
  printf("%lf\n",pow(10,31) );
  /*freopen("in", "r", stdin);
  freopen("out", "w", stdout);*/
 /* int tt,i,j,k;
  scanf("%d", &tt);
  for (int qq = 1; qq <= tt; qq++) {
    printf("Case #%d: ", qq);
    int n;
    int ans_count=0;
    scanf("%s",s);
    l=strlen(s);
    int lo;
    while(true)
    {
       lo=checkminus();
       if(lo==-123)
        break;
       //printf("%d---->\n",checkplus() );
      if(checkplus()!=-40)
       {  flip(checkplus());
       ans_count++;
       //printf("%s\n",s );
       }
       lo=checkminus();
       if(lo==-123)
        break;
      else
       l-=l-1-lo;
     flip(l);
     ans_count++;
       //printf("%s\n",s );
    }
    printf("%d\n",ans_count );
  }*/
  return 0;
}
