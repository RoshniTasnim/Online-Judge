#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int tes,n,p,s = 0;
    vector<int>v;
    cin>>tes;
    while(tes--)
    {
        int i;
        cin>>n;
        for(int i =0;i<n;i++)
        {
            cin>>p;
            v.push_back(p);
        }
        for(i =1;i<=v.size();i++)
        {
            cout<<v[i];
            if(v[i]>0)
                s = s+v[i];
            else
                s = s+0;
        }
        cout<<"Case "<<i<<":"<<s;
        v.clear();
    }
}
