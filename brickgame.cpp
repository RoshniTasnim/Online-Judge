#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int i,j,n,t,p,ca=0,re;
    vector<int>vc;
    vector<int> :: iterator it1,it2;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        j = n;
        while(j--)
        {
            scanf("%d",&p);
            vc.push_back(p);
        }
            sort(vc.begin(), vc.end());

        re = vc[n/2];
        printf("Case %d: %d\n",++ca,re);
        vc.clear();
    }
}

