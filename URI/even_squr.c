#include<stdio.h>
int main()
{
    int n,x,i;
    scanf("%d",&n);
    if(5<n && 2000>n)
    {
       for(i=1;i<=n;i++)
       {
          if(i%2 == 0)
            printf("%d^%d = %d\n",i,2,i*i);
    }
   }
    return 0;
}
