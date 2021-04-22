#include<stdio.h>
int main()
{
    int a,b,i,j,t,s;
    scanf("%d",&t);
    for(j =1;j<=t;j++)
    {
        scanf("%d %d",&a,&b);
        s = 0;
        if(a>b)
        {
          for(i=b;i<=a;i++)
        {
            if(i%2 != 0)
               {
                    s = s+i;
               }
        }
        }
        else
        {
            for(i=a;i<=b;i++)
        {
            if(i%2 != 0)
               {
                    s = s+i;
               }
        }
      }
        printf("Case %d: %d",j,s);
    }
}
