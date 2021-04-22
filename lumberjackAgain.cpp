#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,p,i,k,j;
    vector<int>v;

    while(cin>>n)
   {
       cout<<"Lumberjacks:\n";
     for(k = 0; k<n; k++)
     {
        int ack = 0, dck = 0;
     for(i = 0; i<10; i++)
    {
        cin>>p;
        v.push_back(p);
    }

     for(i = 0; i<10; i++)
     {
           for(j = i+1; j<10; j++)
        {
            if(v[i]<v[j])
                ack = 1;
            else if(v[i]>v[j])
                dck = 1;
        }
     }
        if(ack != dck)
            cout<<"Ordered\n";
        else
            cout<<"Unordered\n";
        v.clear();
     }

    }
   return 0;
}
