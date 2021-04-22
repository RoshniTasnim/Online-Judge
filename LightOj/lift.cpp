#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,a,b,te,s,r,l;
    scanf("%d",&t);
    for(int i =1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        r = a-0;
        if(a>b)
        {
            te =a;
            a= b;
            b =te;
        }
        s = b-a;
        l = s*4+11+r*4+11-3;
        printf("Case %d: %d\n",i,l);
    }
}
