
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int >vc;
    vc.push_back(n);
    //for(int i = 0;i<vc.size();i++)


    printf("%d",vc);
    sort(vc.begin(),vc.end());
    //for(int i = 0;i<vc.size();i++)
    cout<<vc<<endl;
    vc.clear();

}
