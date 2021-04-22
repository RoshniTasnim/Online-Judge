#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>vc;
    vc.push_back(n);
    for(int i = 0;i<vc.size();i++)
        cout<<vc[i];
    sort(vc.begin(),vc.end(),greater<int>());
    for(int i = 0;i<vc.size();i++)
        cout<<vc[i]<<endl;
    vc.clear();
    return 0;
}
