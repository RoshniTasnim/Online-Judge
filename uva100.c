#include<stdio.h>

long long rec(long long n)
{
    if(n==1)
        return 1;
    else if(n&1)
        return rec(3*n+1)+1;
    else
        return rec(n/2)+1;
}

long long mxcycle(long long a, long long b)
{
    long long max =0,cycle;
    if(a>b)
       return mxcycle(b,a);
    while(a<=b)
    {
        cycle = rec(a);
        if(cycle>max)
            max = cycle;
        a++;
    }
    return max;
}
int main()
{
    long long a,b;
    while(scanf("%lld%lld",&a,&b) !=EOF)
        printf("%lld %lld %lld\n",a,b,mxcycle(a,b));
    return 0;
}
