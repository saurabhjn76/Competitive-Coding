#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,i,j,l,flag;
    char a[10000];
    cin>>t;

    for(j=0;j<t;j++)
    {
        flag=0;
        fflush(stdin);
    scanf("%s",a);
        l=strlen(a);
        for(i=0;i<l-1;i++)
        {

            if(abs(a[i+1]-a[i])==abs(a[l-i-1]-a[l-i-2])) flag=1;
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1) cout<<"Funny"<<endl;
        else cout<<"Not Funny"<<endl;
    }
    return 0;
}