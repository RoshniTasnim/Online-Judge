#include<bits/stdc++.h>
using namespace std;
int p[1000];
int main()
{
    int n,m,i,j,k;
    while(scanf("%d%d",&n,&m)==2)
    {
       int val=0;
        for(i=0;i<n;i++)
        {
            int c=0;
            for(j=0;j<m;j++)
            {
                scanf("%d",&p[j]);
                if(p[j]>0)
                    c++;
            }

          if(c==m)
                val++;
        }
        printf("%d\n",val);
    }
    return 0;
}
