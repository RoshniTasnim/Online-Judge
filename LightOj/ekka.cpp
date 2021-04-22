#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int tes,i;
    long long n,a,b,m,p,j;
    scanf("%d",&tes);
    for(i = 1;i <= tes;i++)
    {
        scanf("%lld",&n);
        if(n%2 == 0)
        {
            a = n/2;
            b = 2;
            if(a%2 != 0)
            {
                m = a;
                p = b;
                printf("Case %d: %lld %lld\n",i,m,p);
            }
            else
            {
                for(j = 3; j<n/2 ; j++)
                {
                    if(n%j == 0)
           {
            a = n/j;
            b = j;
            if(a%2 != 0)
            {
                m = a;
                p = b;
                printf("Case %d: %lld %lld\n",i,m,p);
            }
                }

            }
        }
    }
    else
        printf("Case %d: Impossible\n",i);
    }
    return 0;
}
