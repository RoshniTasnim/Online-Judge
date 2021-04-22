#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,n,i,x,y,x1,x2,y1,y2;
    scanf("%d",&t);
    for( i =1;i<=t;i++)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        printf("Case %d:\n",i);
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d%d",&x,&y);
            if( (x>=x1 && x<=x2) && (y>=y1 && y<=y2))
            {
                    printf("Yes\n");
            }
            else
                printf("No\n");
        }
    }
    return 0;
}
