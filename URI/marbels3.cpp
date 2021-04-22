#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;
int a[1001];
int ca[1000];

int main()
{
    vector<int>vc;
    int t,n,p,i,j,u,l,c = 0;
    for(c=1;;c++)
    {
        cin>>n>>t;
        if(n==0 && t==0)
            break;
        for( j = 0; j< n; j++)
        {
            scanf("%d",&p);
            vc.push_back(p);
        }
        sort(vc.begin(),vc.end());
        for( i = 0; i<t; i++)
        {
            scanf("%d",&ca[i]);
        }
        printf("CASE# %d:\n",c);
        int cnt , x = 0;
        for( u = 0; u<t; u++)
        {
            cnt = 0;

                for( l = 0; l<n; l++)
                {
                    if(ca[u] == vc[l] )
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
            if(x == 1)
                printf("%d found at %d\n", ca[u] , cnt);
            else
                printf("%d not found\n",ca[u]);
        }
        vc.clear();
        memset(ca,0,sizeof(ca));
    }
    return 0;
}

