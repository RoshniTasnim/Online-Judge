#include<iostream>
#include<cstdio>
using namespace std;
int ar[52];

int main()
{
   int i,j,k,f,t,cas;
   scanf("%d",&t);
   cas = 0;
   while(t--)
   {

       scanf("%d",&f);

       k = 0;
       if(f == 0)
       {
           k = 1;
           printf("Scenario #%d:\n%d\n",++cas,k);
       }
       else if(f == 1)
       {
           k = 2;
           printf("Scenario #%d:\n%d\n",++cas,k);
       }
       else if(f == 2)
       {
           k = 3;
           printf("Scenario #%d:\n%d\n",++cas,k);
       }
       else
       {
           k = f+2;
           printf("Scenario #%d:\n%d\n",++cas,k);
       }
   }
}
