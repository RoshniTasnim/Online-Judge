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
    sc(“%d”,&t);
    while(t—)
    {
        long long r1,c1,r2,c2;
        sc(“%lld%lld%lld%lld”,&r1,&c1,&r2,&c2);
        if(r1+c2==r2+c1||abs(r1–r2)==abs(c1–c2))
        pf(“Case %d: 1n“,++no);
        else if(r1+c2==abs(r2–c1)||abs(r1–c2)==r2+c1||(r1+r2)%2==(c1+c2)%2)
        pf(“Case %d: 2n“,++no);
        else
        pf(“Case %d: impossiblen“,++no);
    }
    return 0;
}
