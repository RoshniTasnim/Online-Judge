#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int n,k,i,j;
    vector <int> v1, v2;
    cin>>n;
    if(n%2 == 0)
       cout<<n<<endl;
    else
        cout<<n-1<<endl;
    for(i = 1;i<=n;i++)
    {
        if(i%2 != 0)
            v1.push_back(i);
        else
            v2.push_back(i);
    }
    for(j = 0; j<v1.size(); j++)
        cout<<v1[i]<<" ";
    for(k = 0; k<v2.size(); k++)
        cout<<v2[i]<" ";
    cout<<endl;
    v1.clear();
    v2.clear();
}
