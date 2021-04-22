#include<stdio.h>
int main()
{
    int a,b,i,j,t,tem,s;
    scanf("%d",&t);
    for(j =1;j<=t;j++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            tem = a;
            a = b;
            b = tem;
        }
        s = 0;
        for(i =a;i<=b;i++)
        {
            if(i%2 != 0)
               {
                    s =s+i;
               }
        }
        printf("Case %d: %d\n",j,s);
    }
    return 0;
}

