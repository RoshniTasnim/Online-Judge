#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int t,n,i,l,j,k, c = 0;
    vector<string>v;
    string s;
    cin>>t;
    for(k = 0; k<t; k++)
    {
        cin>>n;
        for(l =0; l<n; l++)
        {
            cin>>s;
            v.push_back(s);
        }
        string p = v[0];
        for(i = 1; i<n; i++)
        {
           if(p != v[i])
           {
               c = 1;
               break;
           }

        }
       if( c == 0)
            cout<<p<<endl;
        else
           printf("ingles\n");
        v.clear();
    }
    return 0;
}
