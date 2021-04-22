#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)

int main()
{
    double R,r,x;
    int i,t,n;
    scanf("%d",&t);
    for(i = 1;i<=t;i++)
    {
        scanf("%lf%d",&R,&n);
        x = sin(pi/n);
        r = x*R/(1+x);
        printf("Case%d:%.10lf\n",i,r);
    }
    return 0;
}
