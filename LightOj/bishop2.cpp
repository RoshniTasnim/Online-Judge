#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
#include<iostream>
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    int t,no=0;
    scanf("%d",&t);
    while(t -)
    {
        long long r1,c1,r2,c2;
        scanf("%lld%lld%lld%lld",&r1,&c1,&r2,&c2);
        if(((r1+c2)==(r2+c1))||((r1–r2)==(c1–c2)))
        printf("Case %d: 1\n",++no);
        else if(r1+c2==(r2–c1)||(r1–c2)==r2+c1||(r1+r2)%2==(c1+c2)%2)
        printf("Case %d: 2\n",++no);
        else
        printf("Case %d: impossiblen",++no);
    }
    return 0;
}

