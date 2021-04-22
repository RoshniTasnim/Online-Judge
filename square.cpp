#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    long long a,b,a1,b1,i,t,r,j,x;
    while(scanf("%lld %lld",&a,&b))
    {
        if(a == 0 && b == 0)
            break;
        int c = 0;
        a1 = sqrt(a);
        b1 =sqrt(b);
        for(i = a1;i<=b1;i++)
        {
          x = i*i;
          if(x>=a && x<=b)
            c++;
          if(x>b)
            break;
        }
        printf("%d\n",c);
    }
}
