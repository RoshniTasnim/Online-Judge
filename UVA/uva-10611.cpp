#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,c,n,q,x,y;
    long long p,r;
    vector<long long>f,m,l,h;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%lld",&p);
     f.push_back(p);
    }
    scanf("%d",&q);
    for(j=0;j<q;j++)
    {
        scanf("%lld",&r);
        m.push_back(r);
    }
    for(k=0;k<q;k++)
    {
        x = 0;
        y = 0;
        l.push_back(-1);
        h.push_back(-1);
        for(c=0;c<n;c++)
        {
            if(m[k]>f[c])
            {
                if(l[0]==-1)
                  l.pop_back();
                l.push_back(f[c]);
            }
            else if(m[k]<f[c])
                {
                   if(h[0]==-1)
                        h.pop_back();
                    h.push_back(f[c]);
                }
        }
        x = l.size();
        if(l[x-1]==-1)
            printf("X");
        else
           printf("%lld",l[x-1]);
        if(h[0]==-1)
            printf(" X\n");
        else
            printf(" %lld\n",h[0]);
        l.clear();
        h.clear();
        m.clear();
        f.clear();
}
return 0;
}
