#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    signed long long a;
    long b;
    int t;
    scanf("%d",&t);
    for(int i = 1;i <= t;i++)
    {
        scanf("%lli %li",&a,&b);
        if(b<0)
            b = abs(b);
        if(a<0)
            a = abs(a);
        if(a%b == 0)
            printf("Case %d: divisible\n",i);
        else
            printf("Case %d: not divisible\n",i);
    }
}
