#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int dis[1000];

int main()
{
    int t,s,i,j,k,r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&s);
        for(i = 0; i<s; i++)
        {
            scanf("%d",&dis[i]);

        }
        sort(dis,dis+s);
        r = (dis[s-1]-dis[0])*2;
        printf("%d\n",r);
        memset(dis,0,sizeof(dis));
    }
}
