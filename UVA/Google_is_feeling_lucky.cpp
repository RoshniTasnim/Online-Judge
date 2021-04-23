#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,no=0,t;
    scanf("%d",&n);
    getchar();
    vector<string> ans;
    string s;
    int r,m;

    for(k=0;k<n;k++)
    {
      m=0;
      ans.clear();

      for(i=0;i<10;i++)
      {
          cin>>s;
          scanf("%d",&r);
          if(m<r)
          {
              m=r;
              ans.clear();
              ans.push_back(s);
          }
          else if(m==r)
          {

              ans.push_back(s);
          }
      }
      printf("Case #%d:\n",++no);
      int sz = ans.size();

        for(int i = 0;i < sz;++i)
            cout << ans[i] << '\n';


    }


    }

