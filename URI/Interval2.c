#include<stdio.h>
int main()
{
    int i,s1,s2;
    long long n,x;
    s1 =0;
    s2 =0;
    scanf("%lld",&n);
    for(i =0;i<n;i++)
    {
        scanf("%lld",&x);
        if(x>=10 && x<=20)
            {
                    s1++;

            }
        else
            s2++;
    }
    printf("%d in\n%d out\n",s1,s2);
    return 0;
}
