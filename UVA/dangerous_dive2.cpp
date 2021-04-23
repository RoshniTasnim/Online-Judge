#include<bits/stdc++.h>
using namespace std;
int mp[10009];
int main()
{
    int i,j,k,l,n,q;
    while(scanf("%d%d",&n,&q)==2)
    {
        for(i=0; i<q; i++)
        {
            scanf("%d",&l);
            mp[l]=1;
        }
        if(n==q)
            printf("*");
        else
        {
            for(j=1; j<=n; j++)
            {
                if(mp[j]==0)
                    printf("%d ",j);
            }
        }
        printf("\n");
        memset(mp,0,sizeof(mp));
    }
    return 0;
}
