#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n,q,i,j,k,p,l;
    vector<int>v;
    while(scanf("%d%d",&n,&q)==2)
    {

        for(i =0; i<q; i++)
        {
            scanf("%d",&p);
            v.push_back(p);
        }
        if(n==q)
            printf("*");
        else
        {

            sort(v.begin(),v.end());
            v.push_back(-1);
            int c =0;
            l = 0;
            for(k =1; k<=n; k++)
            {
                if(v[l]==k)
                {

                    l++;
                }
                else
                    printf("%d ",k);
            }
        }
        printf("\n");

        v.clear();
    }
}
