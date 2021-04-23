#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,i,j,k,t,r;
    vector<int>f,m,s,b;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
       scanf("%d",&r);
       f.push_back(r);
    }
    scanf("%d",&q);

    for(j=0;j<q;j++)
    {
        scanf("%d",&r);
        m.push_back(r);
    }


    for(k=0;k<q;k++)
    {
         t = m[k];
        for(j=0;j<n;j++)
        {
            if(t>f[j])
            {
              s.push_back(f[j]);
            }
            else if(t<f[j])
                b.push_back(f[j]);
            else
                f[j]='x';

        }
         printf("%d ",b[1]);
    }
    return 0;

}
