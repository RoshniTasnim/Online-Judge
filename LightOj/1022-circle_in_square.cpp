#include<iostream>
#include<stdio.h>
#include<math.h>
#define PI 2*acos(0.0)
using namespace std;
int main()
{
    double a,c,s,r,R,p;
    int t;
    scanf("%d",&t);
    for(int i =1;i<=t;i++)
    {
        scanf("%lf",&r);
        c = PI*r*r;
        R = 2*r;
        s = R*R;
        a = s-c;
        printf("Case %d: %.2lf\n",i,a);
    }
    return 0;
}
