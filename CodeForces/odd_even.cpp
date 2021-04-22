#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   unsigned long long k,n,i,j,p;
    vector<unsigned long long>v;
    cin>>n>>k;
    for(j= 1; j<=n; j+= 2)
            v.push_back(j);
    for( i =2; i<=n; i+= 2)
        {
            v.push_back(i);
        }
    cout<<v[k-1]<<endl;
    v.clear();
    return 0;
}
