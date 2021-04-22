#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int hold[1000],i = 0,n,t,j,c =0;
    scanf("%d",&t);
    for(j = 1;j<= t;j++)
    {
        scanf("%d",&n);
        while(n != 1)
        {
            hold[i] = n%2;
            n = n/2;
            i++;
        }
        hold[i] = n;
        while(i != -1)
        {
            if(i == 1)
            {
                c++;
            }
        }
        if( c%2 == 0)
            printf("Case %d: odd\n",j);
        else
            printf("Case %d: even\n",j);
    }
}
