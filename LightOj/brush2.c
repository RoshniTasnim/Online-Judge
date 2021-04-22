#include<stdio.h>
int main()
{
    int t,i,n,x,s;
    scanf("%d",&t);
    for(i =1;i<=t;i++)
    {
        scanf("%d",&n);
        s = 0;
        while(n--)
        {
            scanf("%d",&x);
            if(x>0)
                s = s+x;
        }
        printf("Case %d: %d\n",i,s);
    }

    return 0;
}
