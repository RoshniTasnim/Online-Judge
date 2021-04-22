#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,i,s,j;
    scanf("%d",&t);
    for(i =1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        s =0;
        if(a>b)
        {
            for(j =b;j<=a;j++)
                s = s+j;
        }
        else
        {
             for(j =a;j<=b;j++)
                s = s+j;
        }
        printf("Case %d: %d\n",i,s);
    }
}
