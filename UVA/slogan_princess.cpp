#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
    map<string,string>mp;
    int n,tes,i,j,k;
    string s,s1,s2;
    scanf("%d",&n);
    getchar();
    for(i = 1;i<=n;i++)
    {
        getline(cin,s1);
        getline(cin,s2);
        mp[s1] = s2;
    }
    scanf("%d",&tes);
    getchar();
    while(tes--)
    {
        getline(cin,s);
        if(mp.find(s) != mp.end())
        {
            cout<<mp[s]<<endl;
        }
    }

    return 0;
}
