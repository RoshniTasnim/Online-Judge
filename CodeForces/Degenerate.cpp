#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        if((a+b>c && a+c>b && b+c>a) || (a+b>d && a+d>b && b+d>a) || (a+c>d && a+d>c && d+c>a) || (b+c>d && b+d>c && c+d>b))
            printf("TRIANGLE\n");
        else if(a+b==c || a+c==b || b+c==a || a+b==d || a+d==b || b+d==a || a+c==d || a+d==c || d+c==a || b+c==d || b+d==c || c+d==b)
            printf("SEGMENT\n");
        else
            printf("IMPOSSIBLE\n");
    }
    return 0;
}
