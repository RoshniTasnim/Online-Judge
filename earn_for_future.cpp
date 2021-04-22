#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    int t,n,i,j,k,r;
    scanf("%d",&t);
    for(i=1;i<=t;i++ )
    {
        scanf("%d",&n);
        while(n--)
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
