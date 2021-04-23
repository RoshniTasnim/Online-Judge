#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    long long a,b,r;
    while(scanf("%lld%lld",&a,&b) !=EOF)
    {
        if(a<b)
        {
            r = b-a;
            printf("%lld\n",r);
        }
        else
        {
             r = a-b;
            printf("%lld\n",r);
        }
    }
    return 0;
}
