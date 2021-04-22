#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
int a[20001];
int ca[20001];

int main()
{
    int t,n,i,j,u,l,c = 0;
    while(cin>>n>>t)
    {
       if(n==0 && t==0)
          break;
        c++;
        for( j = 0; j< n ; j++)
        {
            scanf("%d",&a[j]);
        }
        sort(a,a+n);
        for( i = 1; i<=t; i++)
        {
            scanf("%d",&ca[i]);
        }
        printf("CASE# %d:\n",c);
        int cnt , x = 0;
        for( u = 1; u<=t; u++)
        {
            cnt = 0;
            {
                for( l = 0; l<n; l++)
                {
                    if(ca[u] == a[l] )
                    {
                        cnt++;
                        x = 1;
                        break;
                    }
                    else{
                        x = 0;
                    }
                    cnt++;
                }

            }
            if(x == 1)
                printf("%d found at %d\n", ca[u] , cnt);
            else
                printf("%d not found\n",ca[u]);
        }
        memset(a,0,sizeof(a));
        memset(ca,0,sizeof(ca));
    }
    return 0;
}
