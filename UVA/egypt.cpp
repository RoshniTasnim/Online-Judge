#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,b,c,a1,b1,c1,r;
    while(cin>>a>>b>>c)
    {
        if(a==0 && b==0 && c==0)
            printf("right\n");
        else if(a>b)
        {
            if(a>c)
            {
                a1 = a*a;
                b1 = b*b;
                c1 = c*c;
                r = b1+c1;
                if(r == a1)
                    printf("right\n");
                else
                    printf("wrong\n");
            }
            else
            {
                a1 = a*a;
                b1 = b*b;
                c1 = c*c;
                r = b1+a1;
                if(r == c1)
                    printf("right\n");
                else
                    printf("wrong\n");
            }
        }
        else if(b>c)
        {
                a1 = a*a;
                b1 = b*b;
                c1 = c*c;
                r = a1+c1;
                if(r == b1)
                    printf("right\n");
                else
                    printf("wrong\n");
        }
        else
        {
                a1 = a*a;
                b1 = b*b;
                c1 = c*c;
                r = b1+a1;
                if(r == c1)
                    printf("right\n");
                else
                    printf("wrong\n");
        }

    }
}
