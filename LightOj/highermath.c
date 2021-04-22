#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,b,c,t,i,n;
    scanf("%d",&n);
    for(i = 1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>b && a>c)
        {
            if(b*b+c*c == a*a)
                printf("Case %d: yes\n",i);
            else
                printf("Case %d: no\n",i);
        }
        else if(b>a && b>c)
        {
            if(a*a+c*c == b*b)
               printf("Case %d: yes\n",i);
            else
                printf("Case %d: no\n",i);
        }
        else if(c>a && c>b)
        {
            if(a*a+b*b == c*c)
               printf("Case %d: yes\n",i);
            else
                printf("Case %d: no\n",i);
        }
        }
        return 0;
    }

