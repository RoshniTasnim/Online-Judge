#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    char s;
    int n,k,j,i,m,cnt;
    vector<pair<int , char> >v;
    while (cin>>n)
    {
      cnt = 0;
      for(i = 0;i<n;i++)
      {
        cin>>k>>s;
        v.push_back(make_pair(k,s));
      }
    for( j = 0;j<v.size();j++)
    {
        for(m = j+1; m<v.size(); m++ )
        {
            if(v[j].first == v[m].first)
            {
                if((v[j].second == 'D' && v[m].second == 'E') || (v[j].second == 'E' && v[m].second == 'D'))
                {
                    cnt++;
                    v[j].first = -1;
                    v[j].second = 0;
                    v[m].first = -1;
                    v[m].second = 0;
                }
            }
        }
    }
    cout<<cnt<<endl;
    v.clear();
    }
    return 0;
}

