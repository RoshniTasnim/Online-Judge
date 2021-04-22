#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t,n,i,j,k;
    vector<int>v;
    scanf("%d",&t);
    for(i = 1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j = 0;j<n;j++)
        {
            scanf("%d",&k);
            v.push_back(k);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        cout<<"Case "<<i<<": "<<v[0]<<endl;
        v.clear();
    }
    return 0;
}
