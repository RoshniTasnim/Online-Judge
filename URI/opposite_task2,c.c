#include<stdio.h>
int main()
{
    int i,n,a,b,c,t;
    scanf("%d",&t);
    for(i =1;i<=t;i++)
    {
        scanf("%d",&n);
            if(n%2 == 0)
               {
                   a = n/2;
                   b = n/2;
                   printf("Case %d:%d %d\n",i,a,b);
               }
            else
            {
                c = n/2;
                a = c*2;
                if(a>10)
                {
                    a = c;
                }
                b = n-a;
                printf("Case %d:%d %d\n",i,a,b);
            }
    }
    return 0;
}
